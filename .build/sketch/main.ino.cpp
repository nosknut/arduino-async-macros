#include <Arduino.h>
#line 1 "C:\\Users\\noskn\\Desktop\\Software\\arduino-async-macros\\main\\main.ino"
#include "AsyncMacros.h"

const int LED_PIN = 5;
const int BUTTON_PIN = 2;

#line 6 "C:\\Users\\noskn\\Desktop\\Software\\arduino-async-macros\\main\\main.ino"
void setup();
#line 14 "C:\\Users\\noskn\\Desktop\\Software\\arduino-async-macros\\main\\main.ino"
bool secondarySequence();
#line 35 "C:\\Users\\noskn\\Desktop\\Software\\arduino-async-macros\\main\\main.ino"
bool updateMainSequence();
#line 180 "C:\\Users\\noskn\\Desktop\\Software\\arduino-async-macros\\main\\main.ino"
void loop();
#line 6 "C:\\Users\\noskn\\Desktop\\Software\\arduino-async-macros\\main\\main.ino"
void setup()
{
    Serial.begin(9600);

    pinMode(BUTTON_PIN, INPUT);
    pinMode(LED_PIN, OUTPUT);
}

bool secondarySequence()
{
    asyncBegin({
        asyncRun({
            Serial.println("Secondary sequence started");
        });
        asyncFor(int, i, 0, i <= 5, i++, {
            asyncRun({
                Serial.print("Secondary running times: ");
                Serial.println(i);
            });
            asyncDelay(1000);
        });
        asyncRun({
            Serial.println("Secondary sequence completed");
            return true;
        });
    });
    return false;
}

bool updateMainSequence()
{
    asyncBegin({
        asyncRun({
            Serial.println("Step 0");
        });

        asyncDelay(2000);

        asyncWhile(true, {
            asyncRun({
                if (digitalRead(BUTTON_PIN))
                {
                    asyncBreak();
                }
            });
            // The next steps get skipped and
            // the while loop ends when the button is pressed
            asyncRun({
                Serial.println("Waiting for button press");
            });
            asyncDelay(1000);
        });

        // Prints every other number from 0 to 10 with
        // a 1 second delay between each
        asyncFor(int, i, 0, i <= 10, i++, {
            asyncRun({
                if (i % 2 == 0)
                {
                    asyncContinue();
                }
            });
            // The next steps get skipped when i is odd
            asyncRun({
                Serial.println(i);
            });
            asyncDelay(1000);
        });

        asyncVariable(float, timesRan, 0);

        asyncWhile(timesRan < 10, {
            asyncRun({
                timesRan += 0.5;
                Serial.print("Times ran: ");
                Serial.println(timesRan);
            });
            asyncDelay(500);
            asyncRun({
                timesRan += 0.5;
                Serial.print("Times ran: ");
                Serial.println(timesRan);
            });
            asyncDelay(500);
        });

        asyncFor(int, i, 0, i <= 5, i++, {
            asyncRun({
                Serial.println(i);
            });
            asyncDelay(1000);
        });

        asyncWhile(!digitalRead(BUTTON_PIN), {
            asyncRun({
                // This sub-sequence will run only
                // when this while loop is active.
                asyncBegin({
                    asyncRun({
                        Serial.println("Waiting for button press");
                    });
                    asyncDelay(1000);
                });
            });
        });

        asyncWhile(!secondarySequence(), {
            asyncRun({
                // Pulse LED while waiting for
                // the secondary sequence to complete
                asyncBegin({
                    asyncFor(int, i, 0, i <= 255, i++, {
                        asyncRun({
                            analogWrite(LED_PIN, i);
                        });
                        asyncDelay(2);
                    });
                    asyncFor(int, i, 255, i >= 0, i--, {
                        asyncRun({
                            analogWrite(LED_PIN, i);
                        });
                        asyncDelay(2);
                    })
                });
            });
        });

        // Flash for 5 seconds
        asyncWhileDuration(5000, {
            asyncRun({
                digitalWrite(LED_PIN, HIGH);
            });
            asyncDelay(1000);
            asyncRun({
                digitalWrite(LED_PIN, LOW);
            });
            asyncDelay(1000);
        });

        asyncRun({
            digitalWrite(LED_PIN, LOW);
            Serial.println("Hold the button to exit the loop");
        });

        asyncDelay(1000);

        asyncWhile(!digitalRead(BUTTON_PIN), {
            asyncRun({
                Serial.println("Step 2");
            });

            asyncDelay(2000);

            asyncRun({
                Serial.println("Step 3");
            });

            asyncDelay(2000);
        });

        asyncRun({
            Serial.println("Complete!");
            Serial.println("Restarting ...");
        });

        asyncDelay(2000);

        asyncRun({
            return true;
        });
    });
    return false;
}

void loop()
{
    // Sequence that starts and stops the LED based
    // on the button state, but it only writes to
    // the pin when the button changes. This means
    // it does not interfere with the main sequence's
    // control of the button when needed.
    asyncBegin({
        // Wait for button press
        asyncWhile(!digitalRead(BUTTON_PIN), {});
        asyncRun({
            digitalWrite(LED_PIN, HIGH);
        });

        // Debounce delay
        asyncDelay(50);

        // Wait for button release
        asyncWhile(digitalRead(BUTTON_PIN), {});
        asyncRun({
            digitalWrite(LED_PIN, LOW);
        });

        // Debounce delay
        asyncDelay(50);
    });

    if (updateMainSequence())
    {
        Serial.println("Sequence notified completion");
    }
}


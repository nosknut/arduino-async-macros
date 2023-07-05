#include <Arduino.h>
#line 1 "C:\\Users\\noskn\\Desktop\\Software\\arduino-macro-sequence\\main\\main.ino"
#include "AsyncMacros.h"

const int LED_PIN = 5;
const int BUTTON_PIN = 2;

#line 6 "C:\\Users\\noskn\\Desktop\\Software\\arduino-macro-sequence\\main\\main.ino"
void setup();
#line 14 "C:\\Users\\noskn\\Desktop\\Software\\arduino-macro-sequence\\main\\main.ino"
bool secondarySequence();
#line 35 "C:\\Users\\noskn\\Desktop\\Software\\arduino-macro-sequence\\main\\main.ino"
bool updateMainSequence();
#line 130 "C:\\Users\\noskn\\Desktop\\Software\\arduino-macro-sequence\\main\\main.ino"
void loop();
#line 6 "C:\\Users\\noskn\\Desktop\\Software\\arduino-macro-sequence\\main\\main.ino"
void setup()
{
    Serial.begin(9600);

    pinMode(BUTTON_PIN, INPUT);
    pinMode(LED_PIN, OUTPUT);
}

bool secondarySequence()
{
    asyncBegin(sec, {
        asyncRun(sec, {
            Serial.println("Secondary sequence started");
        });
        asyncFor(sec, int, i, 0, i <= 5, i++, {
            asyncRun(sec, {
                Serial.print("Secondary running times: ");
                Serial.println(i);
            });
            asyncDelay(sec, 1000);
        });
        asyncRun(sec, {
            Serial.println("Secondary sequence completed");
            return true;
        });
    });
    return false;
}

bool updateMainSequence()
{
    asyncBegin(main, {
        asyncRun(main, {
            Serial.println("Step 0");
        });

        asyncVariable(main, float, timesRan, 0);

        asyncWhile(main, timesRan < 10, {
            asyncRun(main, {
                timesRan += 0.5;
                Serial.print("Times ran: ");
                Serial.println(timesRan);
            });
            asyncDelay(main, 500);
            asyncRun(main, {
                timesRan += 0.5;
                Serial.print("Times ran: ");
                Serial.println(timesRan);
            });
            asyncDelay(main, 500);
        });

        asyncFor(main, int, i, 0, i <= 5, i++, {
            asyncRun(main, {
                Serial.println(i);
            });
            asyncDelay(main, 1000);
        });

        asyncWhile(main, !digitalRead(BUTTON_PIN), {
            asyncRun(main, {
                // This sub-sequence will run only
                // when this while loop is active.
                asyncBegin(print, {
                    asyncRun(print, {
                        Serial.println("Waiting for button press");
                    });
                    asyncDelay(print, 1000);
                });
            });
        });

        asyncWhile(main, !secondarySequence(), {
            asyncRun(main, {
                // Flash LED while waiting for
                // the secondary sequence to complete
                asyncBegin(blink, {
                    asyncRun(blink, {
                        digitalWrite(LED_PIN, HIGH);
                    });
                    asyncDelay(blink, 500);
                    asyncRun(blink, {
                        digitalWrite(LED_PIN, LOW);
                    });
                    asyncDelay(blink, 500);
                });
            });
        });

        asyncRun(main, {
            Serial.println("Hold the button to exit the loop");
        });

        asyncDelay(main, 1000);

        asyncWhile(main, !digitalRead(BUTTON_PIN), {
            asyncRun(main, {
                Serial.println("Step 2");
            });

            asyncDelay(main, 2000);

            asyncRun(main, {
                Serial.println("Step 3");
            });

            asyncDelay(main, 2000);
        });

        asyncRun(main, {
            Serial.println("Complete!");
            Serial.println("Restarting ...");
        });

        asyncDelay(main, 2000);

        asyncRun(main, {
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
    asyncBegin(ledButton, {
        asyncWhile(ledButton, !digitalRead(BUTTON_PIN), {
            // Wait for button press
        });
        asyncRun(ledButton, {
            digitalWrite(LED_PIN, HIGH);
        });
        asyncWhile(ledButton, digitalRead(BUTTON_PIN), {
            // Wait for button release
        });
        asyncRun(ledButton, {
            digitalWrite(LED_PIN, LOW);
        });
    });

    if (updateMainSequence())
    {
        Serial.println("Sequence notified completion");
    }
}


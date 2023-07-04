#include <Arduino.h>
#line 1 "C:\\Users\\noskn\\Desktop\\Software\\arduino-macro-sequence\\main\\main.ino"
#include "AsyncMacros.h"

const int LED_PIN = 5;
const int BUTTON_PIN = 2;

#line 6 "C:\\Users\\noskn\\Desktop\\Software\\arduino-macro-sequence\\main\\main.ino"
void setup();
#line 14 "C:\\Users\\noskn\\Desktop\\Software\\arduino-macro-sequence\\main\\main.ino"
void updateMainSequence();
#line 87 "C:\\Users\\noskn\\Desktop\\Software\\arduino-macro-sequence\\main\\main.ino"
void loop();
#line 6 "C:\\Users\\noskn\\Desktop\\Software\\arduino-macro-sequence\\main\\main.ino"
void setup()
{
    Serial.begin(9600);

    pinMode(BUTTON_PIN, INPUT);
    pinMode(LED_PIN, OUTPUT);
}

void updateMainSequence()
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
    });
}

void loop()
{
    updateMainSequence();

    if (digitalRead(BUTTON_PIN))
    {
        digitalWrite(LED_PIN, HIGH);
    }
    else
    {
        digitalWrite(LED_PIN, LOW);
    }
}


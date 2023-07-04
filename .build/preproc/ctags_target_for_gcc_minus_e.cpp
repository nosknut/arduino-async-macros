# 1 "C:\\Users\\noskn\\Desktop\\Software\\arduino-macro-sequence\\main\\main.ino"
# 2 "C:\\Users\\noskn\\Desktop\\Software\\arduino-macro-sequence\\main\\main.ino" 2

const int LED_PIN = 5;
const int BUTTON_PIN = 2;

void setup()
{
    Serial.begin(9600);

    pinMode(BUTTON_PIN, 0x0);
    pinMode(LED_PIN, 0x1);
}

void updateMainSequence()
{
    {
        static int mainSequenceStep = 0;
        static unsigned long mainDelayTimer = 0;
        int mainSequenceCurrentStep = 0;
        {
            if (mainSequenceStep == mainSequenceCurrentStep++)
            {
                {
                    Serial.println("Step 0");
                };
                mainSequenceStep++;
                ;
            };
            static float timesRan;
            if (mainSequenceStep == mainSequenceCurrentStep++)
            {
                {
                    timesRan = 0;
                };
                mainSequenceStep++;
                ;
            };
            ;
            {
                static int mainWhileStartAnchor = 0;
                ;
                static int mainWhileEndAnchor = 0;
                ;
                mainWhileStartAnchor = mainSequenceCurrentStep;
                if (mainSequenceStep == mainSequenceCurrentStep++)
                {
                    {
                        if (timesRan < 10)
                        {
                            mainSequenceStep++;
                            ;
                        }
                        else
                        {
                            mainSequenceStep = mainWhileEndAnchor;
                            ;
                        }
                    };
                };
                {
                    if (mainSequenceStep == mainSequenceCurrentStep++)
                    {
                        {
                            timesRan += 0.5;
                            Serial.print("Times ran: ");
                            Serial.println(timesRan);
                        };
                        mainSequenceStep++;
                        ;
                    };
                    if (mainSequenceStep == mainSequenceCurrentStep++)
                    {
                        mainDelayTimer = millis();
                        mainSequenceStep++;
                        ;
                    }
                    if (mainSequenceStep == mainSequenceCurrentStep++)
                    {
                        if ((millis() - mainDelayTimer) >= 500)
                        {
                            mainSequenceStep++;
                            ;
                        }
                    };
                    if (mainSequenceStep == mainSequenceCurrentStep++)
                    {
                        {
                            timesRan += 0.5;
                            Serial.print("Times ran: ");
                            Serial.println(timesRan);
                        };
                        mainSequenceStep++;
                        ;
                    };
                    if (mainSequenceStep == mainSequenceCurrentStep++)
                    {
                        mainDelayTimer = millis();
                        mainSequenceStep++;
                        ;
                    }
                    if (mainSequenceStep == mainSequenceCurrentStep++)
                    {
                        if ((millis() - mainDelayTimer) >= 500)
                        {
                            mainSequenceStep++;
                            ;
                        }
                    };
                };
                if (mainSequenceStep == mainSequenceCurrentStep++)
                {
                    mainSequenceStep = mainWhileStartAnchor;
                    ;
                }
                mainWhileEndAnchor = mainSequenceCurrentStep;
                if (mainSequenceStep == mainSequenceCurrentStep++)
                {
                    {
                        mainSequenceStep++;
                        ;
                    };
                };
            };
            {
                static int i;
                if (mainSequenceStep == mainSequenceCurrentStep++)
                {
                    {
                        i = 0;
                    };
                    mainSequenceStep++;
                    ;
                };
                ;
                {
                    static int mainWhileStartAnchor = 0;
                    ;
                    static int mainWhileEndAnchor = 0;
                    ;
                    mainWhileStartAnchor = mainSequenceCurrentStep;
                    if (mainSequenceStep == mainSequenceCurrentStep++)
                    {
                        {
                            if (i <= 5)
                            {
                                mainSequenceStep++;
                                ;
                            }
                            else
                            {
                                mainSequenceStep = mainWhileEndAnchor;
                                ;
                            }
                        };
                    };
                    {
                        {
                            if (mainSequenceStep == mainSequenceCurrentStep++)
                            {
                                {
                                    Serial.println(i);
                                };
                                mainSequenceStep++;
                                ;
                            };
                            if (mainSequenceStep == mainSequenceCurrentStep++)
                            {
                                mainDelayTimer = millis();
                                mainSequenceStep++;
                                ;
                            }
                            if (mainSequenceStep == mainSequenceCurrentStep++)
                            {
                                if ((millis() - mainDelayTimer) >= 1000)
                                {
                                    mainSequenceStep++;
                                    ;
                                }
                            };
                        };
                        if (mainSequenceStep == mainSequenceCurrentStep++)
                        {
                            {
                                i++;
                            };
                            mainSequenceStep++;
                            ;
                        };
                    };
                    if (mainSequenceStep == mainSequenceCurrentStep++)
                    {
                        mainSequenceStep = mainWhileStartAnchor;
                        ;
                    }
                    mainWhileEndAnchor = mainSequenceCurrentStep;
                    if (mainSequenceStep == mainSequenceCurrentStep++)
                    {
                        {
                            mainSequenceStep++;
                            ;
                        };
                    };
                };
            };
            {
                static int mainWhileStartAnchor = 0;
                ;
                static int mainWhileEndAnchor = 0;
                ;
                mainWhileStartAnchor = mainSequenceCurrentStep;
                if (mainSequenceStep == mainSequenceCurrentStep++)
                {
                    {
                        if (!digitalRead(BUTTON_PIN))
                        {
                            mainSequenceStep++;
                            ;
                        }
                        else
                        {
                            mainSequenceStep = mainWhileEndAnchor;
                            ;
                        }
                    };
                };
                {
                    if (mainSequenceStep == mainSequenceCurrentStep++)
                    {
                        { /* This sub-sequence will run only*/ /* when this while loop is active.*/
                            {
                                static int printSequenceStep = 0;
                                static unsigned long printDelayTimer = 0;
                                int printSequenceCurrentStep = 0;
                                {
                                    if (printSequenceStep == printSequenceCurrentStep++)
                                    {
                                        {
                                            Serial.println("Waiting for button press");
                                        };
                                        printSequenceStep++;
                                        ;
                                    };
                                    if (printSequenceStep == printSequenceCurrentStep++)
                                    {
                                        printDelayTimer = millis();
                                        printSequenceStep++;
                                        ;
                                    }
                                    if (printSequenceStep == printSequenceCurrentStep++)
                                    {
                                        if ((millis() - printDelayTimer) >= 1000)
                                        {
                                            printSequenceStep++;
                                            ;
                                        }
                                    };
                                };
                                if (printSequenceStep == printSequenceCurrentStep)
                                {
                                    printSequenceStep = 0;
                                }
                            };
                        };
                        mainSequenceStep++;
                        ;
                    };
                };
                if (mainSequenceStep == mainSequenceCurrentStep++)
                {
                    mainSequenceStep = mainWhileStartAnchor;
                    ;
                }
                mainWhileEndAnchor = mainSequenceCurrentStep;
                if (mainSequenceStep == mainSequenceCurrentStep++)
                {
                    {
                        mainSequenceStep++;
                        ;
                    };
                };
            };
            if (mainSequenceStep == mainSequenceCurrentStep++)
            {
                {
                    Serial.println("Hold the button to exit the loop");
                };
                mainSequenceStep++;
                ;
            };
            if (mainSequenceStep == mainSequenceCurrentStep++)
            {
                mainDelayTimer = millis();
                mainSequenceStep++;
                ;
            }
            if (mainSequenceStep == mainSequenceCurrentStep++)
            {
                if ((millis() - mainDelayTimer) >= 1000)
                {
                    mainSequenceStep++;
                    ;
                }
            };
            {
                static int mainWhileStartAnchor = 0;
                ;
                static int mainWhileEndAnchor = 0;
                ;
                mainWhileStartAnchor = mainSequenceCurrentStep;
                if (mainSequenceStep == mainSequenceCurrentStep++)
                {
                    {
                        if (!digitalRead(BUTTON_PIN))
                        {
                            mainSequenceStep++;
                            ;
                        }
                        else
                        {
                            mainSequenceStep = mainWhileEndAnchor;
                            ;
                        }
                    };
                };
                {
                    if (mainSequenceStep == mainSequenceCurrentStep++)
                    {
                        {
                            Serial.println("Step 2");
                        };
                        mainSequenceStep++;
                        ;
                    };
                    if (mainSequenceStep == mainSequenceCurrentStep++)
                    {
                        mainDelayTimer = millis();
                        mainSequenceStep++;
                        ;
                    }
                    if (mainSequenceStep == mainSequenceCurrentStep++)
                    {
                        if ((millis() - mainDelayTimer) >= 2000)
                        {
                            mainSequenceStep++;
                            ;
                        }
                    };
                    if (mainSequenceStep == mainSequenceCurrentStep++)
                    {
                        {
                            Serial.println("Step 3");
                        };
                        mainSequenceStep++;
                        ;
                    };
                    if (mainSequenceStep == mainSequenceCurrentStep++)
                    {
                        mainDelayTimer = millis();
                        mainSequenceStep++;
                        ;
                    }
                    if (mainSequenceStep == mainSequenceCurrentStep++)
                    {
                        if ((millis() - mainDelayTimer) >= 2000)
                        {
                            mainSequenceStep++;
                            ;
                        }
                    };
                };
                if (mainSequenceStep == mainSequenceCurrentStep++)
                {
                    mainSequenceStep = mainWhileStartAnchor;
                    ;
                }
                mainWhileEndAnchor = mainSequenceCurrentStep;
                if (mainSequenceStep == mainSequenceCurrentStep++)
                {
                    {
                        mainSequenceStep++;
                        ;
                    };
                };
            };
            if (mainSequenceStep == mainSequenceCurrentStep++)
            {
                {
                    Serial.println("Complete!");
                    Serial.println("Restarting ...");
                };
                mainSequenceStep++;
                ;
            };
            if (mainSequenceStep == mainSequenceCurrentStep++)
            {
                mainDelayTimer = millis();
                mainSequenceStep++;
                ;
            }
            if (mainSequenceStep == mainSequenceCurrentStep++)
            {
                if ((millis() - mainDelayTimer) >= 2000)
                {
                    mainSequenceStep++;
                    ;
                }
            };
        };
        if (mainSequenceStep == mainSequenceCurrentStep)
        {
            mainSequenceStep = 0;
        }
    }
# 84 "C:\\Users\\noskn\\Desktop\\Software\\arduino-macro-sequence\\main\\main.ino"
    ;
}

void loop()
{
    updateMainSequence();

    if (digitalRead(BUTTON_PIN))
    {
        digitalWrite(LED_PIN, 0x1);
    }
    else
    {
        digitalWrite(LED_PIN, 0x0);
    }
}

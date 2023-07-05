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

bool secondarySequence()
{
    {
        static int secSequenceStep = 0;
        static unsigned long secDelayTimer = 0;
        int secSequenceCurrentStep = 0;
        {
            if (secSequenceStep == secSequenceCurrentStep++)
            {
                secSequenceStep++;
                ;
                {
                    Serial.println("Secondary sequence started");
                };
            };
            {
                static int i;
                if (secSequenceStep == secSequenceCurrentStep++)
                {
                    secSequenceStep++;
                    ;
                    {
                        i = 0;
                    };
                };
                ;
                {
                    static int secWhileStartAnchor = 0;
                    ;
                    static int secWhileEndAnchor = 0;
                    ;
                    secWhileStartAnchor = secSequenceCurrentStep;
                    if (secSequenceStep == secSequenceCurrentStep++)
                    {
                        {
                            if (i <= 5)
                            {
                                secSequenceStep++;
                                ;
                            }
                            else
                            {
                                secSequenceStep = secWhileEndAnchor;
                                ;
                            }
                        };
                    };
                    {
                        {
                            if (secSequenceStep == secSequenceCurrentStep++)
                            {
                                secSequenceStep++;
                                ;
                                {
                                    Serial.print("Secondary running times: ");
                                    Serial.println(i);
                                };
                            };
                            if (secSequenceStep == secSequenceCurrentStep++)
                            {
                                secDelayTimer = millis();
                                secSequenceStep++;
                                ;
                            }
                            if (secSequenceStep == secSequenceCurrentStep++)
                            {
                                if ((millis() - secDelayTimer) >= 1000)
                                {
                                    secSequenceStep++;
                                    ;
                                }
                            };
                        };
                        if (secSequenceStep == secSequenceCurrentStep++)
                        {
                            secSequenceStep++;
                            ;
                            {
                                i++;
                            };
                        };
                    };
                    if (secSequenceStep == secSequenceCurrentStep++)
                    {
                        secSequenceStep = secWhileStartAnchor;
                        ;
                    }
                    secWhileEndAnchor = secSequenceCurrentStep;
                    if (secSequenceStep == secSequenceCurrentStep++)
                    {
                        {
                            secSequenceStep++;
                            ;
                        };
                    };
                };
            };
            if (secSequenceStep == secSequenceCurrentStep++)
            {
                secSequenceStep++;
                ;
                {
                    Serial.println("Secondary sequence completed");
                    return true;
                };
            };
        };
        if (secSequenceStep == secSequenceCurrentStep)
        {
            secSequenceStep = 0;
        }
    }
# 31 "C:\\Users\\noskn\\Desktop\\Software\\arduino-macro-sequence\\main\\main.ino"
    ;
    return false;
}

bool updateMainSequence()
{
    {
        static int mainSequenceStep = 0;
        static unsigned long mainDelayTimer = 0;
        int mainSequenceCurrentStep = 0;
        {
            if (mainSequenceStep == mainSequenceCurrentStep++)
            {
                mainSequenceStep++;
                ;
                {
                    Serial.println("Step 0");
                };
            };
            static float timesRan;
            if (mainSequenceStep == mainSequenceCurrentStep++)
            {
                mainSequenceStep++;
                ;
                {
                    timesRan = 0;
                };
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
                        mainSequenceStep++;
                        ;
                        {
                            timesRan += 0.5;
                            Serial.print("Times ran: ");
                            Serial.println(timesRan);
                        };
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
                        mainSequenceStep++;
                        ;
                        {
                            timesRan += 0.5;
                            Serial.print("Times ran: ");
                            Serial.println(timesRan);
                        };
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
                    mainSequenceStep++;
                    ;
                    {
                        i = 0;
                    };
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
                                mainSequenceStep++;
                                ;
                                {
                                    Serial.println(i);
                                };
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
                            mainSequenceStep++;
                            ;
                            {
                                i++;
                            };
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
                        mainSequenceStep++;
                        ;
                        { /* This sub-sequence will run only*/ /* when this while loop is active.*/
                            {
                                static int printSequenceStep = 0;
                                static unsigned long printDelayTimer = 0;
                                int printSequenceCurrentStep = 0;
                                {
                                    if (printSequenceStep == printSequenceCurrentStep++)
                                    {
                                        printSequenceStep++;
                                        ;
                                        {
                                            Serial.println("Waiting for button press");
                                        };
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
                static int mainWhileStartAnchor = 0;
                ;
                static int mainWhileEndAnchor = 0;
                ;
                mainWhileStartAnchor = mainSequenceCurrentStep;
                if (mainSequenceStep == mainSequenceCurrentStep++)
                {
                    {
                        if (!secondarySequence())
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
                        mainSequenceStep++;
                        ;
                        { /* Flash LED while waiting for*/ /* the secondary sequence to complete*/
                            {
                                static int blinkSequenceStep = 0;
                                static unsigned long blinkDelayTimer = 0;
                                int blinkSequenceCurrentStep = 0;
                                {
                                    if (blinkSequenceStep == blinkSequenceCurrentStep++)
                                    {
                                        blinkSequenceStep++;
                                        ;
                                        {
                                            digitalWrite(LED_PIN, 0x1);
                                        };
                                    };
                                    if (blinkSequenceStep == blinkSequenceCurrentStep++)
                                    {
                                        blinkDelayTimer = millis();
                                        blinkSequenceStep++;
                                        ;
                                    }
                                    if (blinkSequenceStep == blinkSequenceCurrentStep++)
                                    {
                                        if ((millis() - blinkDelayTimer) >= 500)
                                        {
                                            blinkSequenceStep++;
                                            ;
                                        }
                                    };
                                    if (blinkSequenceStep == blinkSequenceCurrentStep++)
                                    {
                                        blinkSequenceStep++;
                                        ;
                                        {
                                            digitalWrite(LED_PIN, 0x0);
                                        };
                                    };
                                    if (blinkSequenceStep == blinkSequenceCurrentStep++)
                                    {
                                        blinkDelayTimer = millis();
                                        blinkSequenceStep++;
                                        ;
                                    }
                                    if (blinkSequenceStep == blinkSequenceCurrentStep++)
                                    {
                                        if ((millis() - blinkDelayTimer) >= 500)
                                        {
                                            blinkSequenceStep++;
                                            ;
                                        }
                                    };
                                };
                                if (blinkSequenceStep == blinkSequenceCurrentStep)
                                {
                                    blinkSequenceStep = 0;
                                }
                            };
                        };
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
                mainSequenceStep++;
                ;
                {
                    Serial.println("Hold the button to exit the loop");
                };
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
                        mainSequenceStep++;
                        ;
                        {
                            Serial.println("Step 2");
                        };
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
                        mainSequenceStep++;
                        ;
                        {
                            Serial.println("Step 3");
                        };
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
                mainSequenceStep++;
                ;
                {
                    Serial.println("Complete!");
                    Serial.println("Restarting ...");
                };
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
                mainSequenceStep++;
                ;
                {
                    return true;
                };
            };
        };
        if (mainSequenceStep == mainSequenceCurrentStep)
        {
            mainSequenceStep = 0;
        }
    }
# 126 "C:\\Users\\noskn\\Desktop\\Software\\arduino-macro-sequence\\main\\main.ino"
    ;
    return false;
}

void loop()
{
    // Sequence that starts and stops the LED based
    // on the button state, but it only writes to
    // the pin when the button changes. This means
    // it does not interfere with the main sequence's
    // control of the button when needed.
    {
        static int ledButtonSequenceStep = 0;
        static unsigned long ledButtonDelayTimer = 0;
        int ledButtonSequenceCurrentStep = 0;
        {
            {
                static int ledButtonWhileStartAnchor = 0;
                ;
                static int ledButtonWhileEndAnchor = 0;
                ;
                ledButtonWhileStartAnchor = ledButtonSequenceCurrentStep;
                if (ledButtonSequenceStep == ledButtonSequenceCurrentStep++)
                {
                    {
                        if (!digitalRead(BUTTON_PIN))
                        {
                            ledButtonSequenceStep++;
                            ;
                        }
                        else
                        {
                            ledButtonSequenceStep = ledButtonWhileEndAnchor;
                            ;
                        }
                    };
                };
                {/* Wait for button press*/};
                if (ledButtonSequenceStep == ledButtonSequenceCurrentStep++)
                {
                    ledButtonSequenceStep = ledButtonWhileStartAnchor;
                    ;
                }
                ledButtonWhileEndAnchor = ledButtonSequenceCurrentStep;
                if (ledButtonSequenceStep == ledButtonSequenceCurrentStep++)
                {
                    {
                        ledButtonSequenceStep++;
                        ;
                    };
                };
            };
            if (ledButtonSequenceStep == ledButtonSequenceCurrentStep++)
            {
                ledButtonSequenceStep++;
                ;
                {
                    digitalWrite(LED_PIN, 0x1);
                };
            };
            {
                static int ledButtonWhileStartAnchor = 0;
                ;
                static int ledButtonWhileEndAnchor = 0;
                ;
                ledButtonWhileStartAnchor = ledButtonSequenceCurrentStep;
                if (ledButtonSequenceStep == ledButtonSequenceCurrentStep++)
                {
                    {
                        if (digitalRead(BUTTON_PIN))
                        {
                            ledButtonSequenceStep++;
                            ;
                        }
                        else
                        {
                            ledButtonSequenceStep = ledButtonWhileEndAnchor;
                            ;
                        }
                    };
                };
                {/* Wait for button release*/};
                if (ledButtonSequenceStep == ledButtonSequenceCurrentStep++)
                {
                    ledButtonSequenceStep = ledButtonWhileStartAnchor;
                    ;
                }
                ledButtonWhileEndAnchor = ledButtonSequenceCurrentStep;
                if (ledButtonSequenceStep == ledButtonSequenceCurrentStep++)
                {
                    {
                        ledButtonSequenceStep++;
                        ;
                    };
                };
            };
            if (ledButtonSequenceStep == ledButtonSequenceCurrentStep++)
            {
                ledButtonSequenceStep++;
                ;
                {
                    digitalWrite(LED_PIN, 0x0);
                };
            };
        };
        if (ledButtonSequenceStep == ledButtonSequenceCurrentStep)
        {
            ledButtonSequenceStep = 0;
        }
    }
# 150 "C:\\Users\\noskn\\Desktop\\Software\\arduino-macro-sequence\\main\\main.ino"
    ;

    if (updateMainSequence())
    {
        Serial.println("Sequence notified completion");
    }
}

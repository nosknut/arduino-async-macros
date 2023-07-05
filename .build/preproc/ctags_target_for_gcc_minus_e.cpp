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
        static int _asyncSequenceStep = 0;
        static unsigned long _asyncSequenceDelayTimer = 0;
        int _asyncSequenceCurrentStep = 0;
        {
            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
            {
                {
                    _asyncSequenceStep++;
                    ;
                    {
                        Serial.println("Secondary sequence started");
                    };
                };
            };
            ;
            {
                static int i;
                if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                {
                    {
                        _asyncSequenceStep++;
                        ;
                        {
                            i = 0;
                        };
                    };
                };
                ;
                ;
                {
                    static int WhileStartAnchor = 0;
                    ;
                    static int WhileEndAnchor = 0;
                    ;
                    WhileStartAnchor = _asyncSequenceCurrentStep;
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            if (i <= 5)
                            {
                                _asyncSequenceStep++;
                                ;
                            }
                            else
                            {
                                _asyncSequenceStep = WhileEndAnchor;
                                ;
                            }
                        };
                    };
                    {
                        {
                            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                            {
                                {
                                    _asyncSequenceStep++;
                                    ;
                                    {
                                        Serial.print("Secondary running times: ");
                                        Serial.println(i);
                                    };
                                };
                            };
                            ;
                            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                            {
                                {
                                    _asyncSequenceDelayTimer = millis();
                                    _asyncSequenceStep++;
                                    ;
                                };
                            };
                            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                            {
                                {
                                    if ((millis() - _asyncSequenceDelayTimer) >= 1000)
                                    {
                                        _asyncSequenceStep++;
                                        ;
                                    }
                                };
                            };
                            ;
                        };
                        if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                        {
                            {
                                _asyncSequenceStep++;
                                ;
                                {
                                    i++;
                                };
                            };
                        };
                        ;
                    };
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep = WhileStartAnchor;
                            ;
                        };
                    };
                    WhileEndAnchor = _asyncSequenceCurrentStep;
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep++;
                            ;
                        };
                    };
                };
            };
            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
            {
                {
                    _asyncSequenceStep++;
                    ;
                    {
                        Serial.println("Secondary sequence completed");
                        return true;
                    };
                };
            };
            ;
        };
        if (_asyncSequenceStep == _asyncSequenceCurrentStep)
        {
            _asyncSequenceStep = 0;
        }
    }
# 31 "C:\\Users\\noskn\\Desktop\\Software\\arduino-macro-sequence\\main\\main.ino"
    ;
    return false;
}

bool updateMainSequence()
{
    {
        static int _asyncSequenceStep = 0;
        static unsigned long _asyncSequenceDelayTimer = 0;
        int _asyncSequenceCurrentStep = 0;
        {
            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
            {
                {
                    _asyncSequenceStep++;
                    ;
                    {
                        Serial.println("Step 0");
                    };
                };
            };
            ;
            static float timesRan;
            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
            {
                {
                    _asyncSequenceStep++;
                    ;
                    {
                        timesRan = 0;
                    };
                };
            };
            ;
            ;
            {
                static int WhileStartAnchor = 0;
                ;
                static int WhileEndAnchor = 0;
                ;
                WhileStartAnchor = _asyncSequenceCurrentStep;
                if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                {
                    {
                        if (timesRan < 10)
                        {
                            _asyncSequenceStep++;
                            ;
                        }
                        else
                        {
                            _asyncSequenceStep = WhileEndAnchor;
                            ;
                        }
                    };
                };
                {
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep++;
                            ;
                            {
                                timesRan += 0.5;
                                Serial.print("Times ran: ");
                                Serial.println(timesRan);
                            };
                        };
                    };
                    ;
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceDelayTimer = millis();
                            _asyncSequenceStep++;
                            ;
                        };
                    };
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            if ((millis() - _asyncSequenceDelayTimer) >= 500)
                            {
                                _asyncSequenceStep++;
                                ;
                            }
                        };
                    };
                    ;
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep++;
                            ;
                            {
                                timesRan += 0.5;
                                Serial.print("Times ran: ");
                                Serial.println(timesRan);
                            };
                        };
                    };
                    ;
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceDelayTimer = millis();
                            _asyncSequenceStep++;
                            ;
                        };
                    };
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            if ((millis() - _asyncSequenceDelayTimer) >= 500)
                            {
                                _asyncSequenceStep++;
                                ;
                            }
                        };
                    };
                    ;
                };
                if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                {
                    {
                        _asyncSequenceStep = WhileStartAnchor;
                        ;
                    };
                };
                WhileEndAnchor = _asyncSequenceCurrentStep;
                if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                {
                    {
                        _asyncSequenceStep++;
                        ;
                    };
                };
            };
            {
                static int i;
                if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                {
                    {
                        _asyncSequenceStep++;
                        ;
                        {
                            i = 0;
                        };
                    };
                };
                ;
                ;
                {
                    static int WhileStartAnchor = 0;
                    ;
                    static int WhileEndAnchor = 0;
                    ;
                    WhileStartAnchor = _asyncSequenceCurrentStep;
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            if (i <= 5)
                            {
                                _asyncSequenceStep++;
                                ;
                            }
                            else
                            {
                                _asyncSequenceStep = WhileEndAnchor;
                                ;
                            }
                        };
                    };
                    {
                        {
                            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                            {
                                {
                                    _asyncSequenceStep++;
                                    ;
                                    {
                                        Serial.println(i);
                                    };
                                };
                            };
                            ;
                            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                            {
                                {
                                    _asyncSequenceDelayTimer = millis();
                                    _asyncSequenceStep++;
                                    ;
                                };
                            };
                            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                            {
                                {
                                    if ((millis() - _asyncSequenceDelayTimer) >= 1000)
                                    {
                                        _asyncSequenceStep++;
                                        ;
                                    }
                                };
                            };
                            ;
                        };
                        if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                        {
                            {
                                _asyncSequenceStep++;
                                ;
                                {
                                    i++;
                                };
                            };
                        };
                        ;
                    };
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep = WhileStartAnchor;
                            ;
                        };
                    };
                    WhileEndAnchor = _asyncSequenceCurrentStep;
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep++;
                            ;
                        };
                    };
                };
            };
            {
                static int WhileStartAnchor = 0;
                ;
                static int WhileEndAnchor = 0;
                ;
                WhileStartAnchor = _asyncSequenceCurrentStep;
                if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                {
                    {
                        if (!digitalRead(BUTTON_PIN))
                        {
                            _asyncSequenceStep++;
                            ;
                        }
                        else
                        {
                            _asyncSequenceStep = WhileEndAnchor;
                            ;
                        }
                    };
                };
                {
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep++;
                            ;
                            { /* This sub-sequence will run only*/ /* when this while loop is active.*/
                                {
                                    static int _asyncSequenceStep = 0;
                                    static unsigned long _asyncSequenceDelayTimer = 0;
                                    int _asyncSequenceCurrentStep = 0;
                                    {
                                        if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                        {
                                            {
                                                _asyncSequenceStep++;
                                                ;
                                                {
                                                    Serial.println("Waiting for button press");
                                                };
                                            };
                                        };
                                        ;
                                        if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                        {
                                            {
                                                _asyncSequenceDelayTimer = millis();
                                                _asyncSequenceStep++;
                                                ;
                                            };
                                        };
                                        if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                        {
                                            {
                                                if ((millis() - _asyncSequenceDelayTimer) >= 1000)
                                                {
                                                    _asyncSequenceStep++;
                                                    ;
                                                }
                                            };
                                        };
                                        ;
                                    };
                                    if (_asyncSequenceStep == _asyncSequenceCurrentStep)
                                    {
                                        _asyncSequenceStep = 0;
                                    }
                                };
                            };
                        };
                    };
                    ;
                };
                if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                {
                    {
                        _asyncSequenceStep = WhileStartAnchor;
                        ;
                    };
                };
                WhileEndAnchor = _asyncSequenceCurrentStep;
                if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                {
                    {
                        _asyncSequenceStep++;
                        ;
                    };
                };
            };
            {
                static int WhileStartAnchor = 0;
                ;
                static int WhileEndAnchor = 0;
                ;
                WhileStartAnchor = _asyncSequenceCurrentStep;
                if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                {
                    {
                        if (!secondarySequence())
                        {
                            _asyncSequenceStep++;
                            ;
                        }
                        else
                        {
                            _asyncSequenceStep = WhileEndAnchor;
                            ;
                        }
                    };
                };
                {
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep++;
                            ;
                            { /* Pulse LED while waiting for*/ /* the secondary sequence to complete*/
                                {
                                    static int _asyncSequenceStep = 0;
                                    static unsigned long _asyncSequenceDelayTimer = 0;
                                    int _asyncSequenceCurrentStep = 0;
                                    {
                                        {
                                            static int i;
                                            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                            {
                                                {
                                                    _asyncSequenceStep++;
                                                    ;
                                                    {
                                                        i = 0;
                                                    };
                                                };
                                            };
                                            ;
                                            ;
                                            {
                                                static int WhileStartAnchor = 0;
                                                ;
                                                static int WhileEndAnchor = 0;
                                                ;
                                                WhileStartAnchor = _asyncSequenceCurrentStep;
                                                if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                                {
                                                    {
                                                        if (i <= 255)
                                                        {
                                                            _asyncSequenceStep++;
                                                            ;
                                                        }
                                                        else
                                                        {
                                                            _asyncSequenceStep = WhileEndAnchor;
                                                            ;
                                                        }
                                                    };
                                                };
                                                {
                                                    {
                                                        if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                                        {
                                                            {
                                                                _asyncSequenceStep++;
                                                                ;
                                                                {
                                                                    analogWrite(LED_PIN, i);
                                                                };
                                                            };
                                                        };
                                                        ;
                                                        if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                                        {
                                                            {
                                                                _asyncSequenceDelayTimer = millis();
                                                                _asyncSequenceStep++;
                                                                ;
                                                            };
                                                        };
                                                        if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                                        {
                                                            {
                                                                if ((millis() - _asyncSequenceDelayTimer) >= 2)
                                                                {
                                                                    _asyncSequenceStep++;
                                                                    ;
                                                                }
                                                            };
                                                        };
                                                        ;
                                                    };
                                                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                                    {
                                                        {
                                                            _asyncSequenceStep++;
                                                            ;
                                                            {
                                                                i++;
                                                            };
                                                        };
                                                    };
                                                    ;
                                                };
                                                if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                                {
                                                    {
                                                        _asyncSequenceStep = WhileStartAnchor;
                                                        ;
                                                    };
                                                };
                                                WhileEndAnchor = _asyncSequenceCurrentStep;
                                                if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                                {
                                                    {
                                                        _asyncSequenceStep++;
                                                        ;
                                                    };
                                                };
                                            };
                                        };
                                        {
                                            static int i;
                                            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                            {
                                                {
                                                    _asyncSequenceStep++;
                                                    ;
                                                    {
                                                        i = 255;
                                                    };
                                                };
                                            };
                                            ;
                                            ;
                                            {
                                                static int WhileStartAnchor = 0;
                                                ;
                                                static int WhileEndAnchor = 0;
                                                ;
                                                WhileStartAnchor = _asyncSequenceCurrentStep;
                                                if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                                {
                                                    {
                                                        if (i >= 0)
                                                        {
                                                            _asyncSequenceStep++;
                                                            ;
                                                        }
                                                        else
                                                        {
                                                            _asyncSequenceStep = WhileEndAnchor;
                                                            ;
                                                        }
                                                    };
                                                };
                                                {
                                                    {
                                                        if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                                        {
                                                            {
                                                                _asyncSequenceStep++;
                                                                ;
                                                                {
                                                                    analogWrite(LED_PIN, i);
                                                                };
                                                            };
                                                        };
                                                        ;
                                                        if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                                        {
                                                            {
                                                                _asyncSequenceDelayTimer = millis();
                                                                _asyncSequenceStep++;
                                                                ;
                                                            };
                                                        };
                                                        if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                                        {
                                                            {
                                                                if ((millis() - _asyncSequenceDelayTimer) >= 2)
                                                                {
                                                                    _asyncSequenceStep++;
                                                                    ;
                                                                }
                                                            };
                                                        };
                                                        ;
                                                    };
                                                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                                    {
                                                        {
                                                            _asyncSequenceStep++;
                                                            ;
                                                            {
                                                                i--;
                                                            };
                                                        };
                                                    };
                                                    ;
                                                };
                                                if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                                {
                                                    {
                                                        _asyncSequenceStep = WhileStartAnchor;
                                                        ;
                                                    };
                                                };
                                                WhileEndAnchor = _asyncSequenceCurrentStep;
                                                if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                                {
                                                    {
                                                        _asyncSequenceStep++;
                                                        ;
                                                    };
                                                };
                                            };
                                        }
                                    };
                                    if (_asyncSequenceStep == _asyncSequenceCurrentStep)
                                    {
                                        _asyncSequenceStep = 0;
                                    }
                                };
                            };
                        };
                    };
                    ;
                };
                if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                {
                    {
                        _asyncSequenceStep = WhileStartAnchor;
                        ;
                    };
                };
                WhileEndAnchor = _asyncSequenceCurrentStep;
                if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                {
                    {
                        _asyncSequenceStep++;
                        ;
                    };
                };
            };
            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
            {
                {
                    _asyncSequenceStep++;
                    ;
                    {
                        digitalWrite(LED_PIN, 0x0);
                        Serial.println("Hold the button to exit the loop");
                    };
                };
            };
            ;
            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
            {
                {
                    _asyncSequenceDelayTimer = millis();
                    _asyncSequenceStep++;
                    ;
                };
            };
            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
            {
                {
                    if ((millis() - _asyncSequenceDelayTimer) >= 1000)
                    {
                        _asyncSequenceStep++;
                        ;
                    }
                };
            };
            ;
            {
                static int WhileStartAnchor = 0;
                ;
                static int WhileEndAnchor = 0;
                ;
                WhileStartAnchor = _asyncSequenceCurrentStep;
                if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                {
                    {
                        if (!digitalRead(BUTTON_PIN))
                        {
                            _asyncSequenceStep++;
                            ;
                        }
                        else
                        {
                            _asyncSequenceStep = WhileEndAnchor;
                            ;
                        }
                    };
                };
                {
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep++;
                            ;
                            {
                                Serial.println("Step 2");
                            };
                        };
                    };
                    ;
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceDelayTimer = millis();
                            _asyncSequenceStep++;
                            ;
                        };
                    };
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            if ((millis() - _asyncSequenceDelayTimer) >= 2000)
                            {
                                _asyncSequenceStep++;
                                ;
                            }
                        };
                    };
                    ;
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep++;
                            ;
                            {
                                Serial.println("Step 3");
                            };
                        };
                    };
                    ;
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceDelayTimer = millis();
                            _asyncSequenceStep++;
                            ;
                        };
                    };
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            if ((millis() - _asyncSequenceDelayTimer) >= 2000)
                            {
                                _asyncSequenceStep++;
                                ;
                            }
                        };
                    };
                    ;
                };
                if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                {
                    {
                        _asyncSequenceStep = WhileStartAnchor;
                        ;
                    };
                };
                WhileEndAnchor = _asyncSequenceCurrentStep;
                if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                {
                    {
                        _asyncSequenceStep++;
                        ;
                    };
                };
            };
            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
            {
                {
                    _asyncSequenceStep++;
                    ;
                    {
                        Serial.println("Complete!");
                        Serial.println("Restarting ...");
                    };
                };
            };
            ;
            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
            {
                {
                    _asyncSequenceDelayTimer = millis();
                    _asyncSequenceStep++;
                    ;
                };
            };
            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
            {
                {
                    if ((millis() - _asyncSequenceDelayTimer) >= 2000)
                    {
                        _asyncSequenceStep++;
                        ;
                    }
                };
            };
            ;
            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
            {
                {
                    _asyncSequenceStep++;
                    ;
                    {
                        return true;
                    };
                };
            };
            ;
        };
        if (_asyncSequenceStep == _asyncSequenceCurrentStep)
        {
            _asyncSequenceStep = 0;
        }
    }
# 131 "C:\\Users\\noskn\\Desktop\\Software\\arduino-macro-sequence\\main\\main.ino"
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
        static int _asyncSequenceStep = 0;
        static unsigned long _asyncSequenceDelayTimer = 0;
        int _asyncSequenceCurrentStep = 0;
        { /* Wait for button press*/
            {
                static int WhileStartAnchor = 0;
                ;
                static int WhileEndAnchor = 0;
                ;
                WhileStartAnchor = _asyncSequenceCurrentStep;
                if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                {
                    {
                        if (!digitalRead(BUTTON_PIN))
                        {
                            _asyncSequenceStep++;
                            ;
                        }
                        else
                        {
                            _asyncSequenceStep = WhileEndAnchor;
                            ;
                        }
                    };
                };
                {};
                if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                {
                    {
                        _asyncSequenceStep = WhileStartAnchor;
                        ;
                    };
                };
                WhileEndAnchor = _asyncSequenceCurrentStep;
                if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                {
                    {
                        _asyncSequenceStep++;
                        ;
                    };
                };
            };
            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
            {
                {
                    _asyncSequenceStep++;
                    ;
                    {
                        digitalWrite(LED_PIN, 0x1);
                    };
                };
            };
            ; /* Debounce delay*/
            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
            {
                {
                    _asyncSequenceDelayTimer = millis();
                    _asyncSequenceStep++;
                    ;
                };
            };
            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
            {
                {
                    if ((millis() - _asyncSequenceDelayTimer) >= 50)
                    {
                        _asyncSequenceStep++;
                        ;
                    }
                };
            };
            ; /* Wait for button release*/
            {
                static int WhileStartAnchor = 0;
                ;
                static int WhileEndAnchor = 0;
                ;
                WhileStartAnchor = _asyncSequenceCurrentStep;
                if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                {
                    {
                        if (digitalRead(BUTTON_PIN))
                        {
                            _asyncSequenceStep++;
                            ;
                        }
                        else
                        {
                            _asyncSequenceStep = WhileEndAnchor;
                            ;
                        }
                    };
                };
                {};
                if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                {
                    {
                        _asyncSequenceStep = WhileStartAnchor;
                        ;
                    };
                };
                WhileEndAnchor = _asyncSequenceCurrentStep;
                if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                {
                    {
                        _asyncSequenceStep++;
                        ;
                    };
                };
            };
            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
            {
                {
                    _asyncSequenceStep++;
                    ;
                    {
                        digitalWrite(LED_PIN, 0x0);
                    };
                };
            };
            ; /* Debounce delay*/
            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
            {
                {
                    _asyncSequenceDelayTimer = millis();
                    _asyncSequenceStep++;
                    ;
                };
            };
            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
            {
                {
                    if ((millis() - _asyncSequenceDelayTimer) >= 50)
                    {
                        _asyncSequenceStep++;
                        ;
                    }
                };
            };
            ;
        };
        if (_asyncSequenceStep == _asyncSequenceCurrentStep)
        {
            _asyncSequenceStep = 0;
        }
    }
# 160 "C:\\Users\\noskn\\Desktop\\Software\\arduino-macro-sequence\\main\\main.ino"
    ;

    if (updateMainSequence())
    {
        Serial.println("Sequence notified completion");
    }
}

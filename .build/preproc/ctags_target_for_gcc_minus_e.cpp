# 1 "C:\\Users\\noskn\\Desktop\\Software\\arduino-async-macros\\main\\main.ino"
# 2 "C:\\Users\\noskn\\Desktop\\Software\\arduino-async-macros\\main\\main.ino" 2

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
        int _asyncSequenceCurrentStep = 0; /*////////////////////////////////////*/ /*////////// Begin sequence //////////*/ /*////////////////////////////////////*/
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
            ; /*////////////////////////////////////*/ /*////////// Begin for-loop //////////*/ /*////////////////////////////////////*/
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
                ; /*////////////////////////////////////*/ /*///////// Begin while-loop /////////*/ /*////////////////////////////////////*/
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
                    ; /*////////////////////////////////////*/ /*////// Begin while-loop task ///////*/ /*////////////////////////////////////*/
                    { /*////////////////////////////////////*/ /*//////// Begin for-loop task ///////*/ /*////////////////////////////////////*/
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
                            ; /*////////////////////////////////////*/ /*/////////// Begin delay ////////////*/ /*////////////////////////////////////*/
                            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                            {
                                {
                                    _asyncSequenceStep++;
                                    ;
                                    {
                                        _asyncSequenceDelayTimer = millis();
                                    };
                                };
                            };
                            ;
                            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                            {
                                {
                                    if ((millis() - _asyncSequenceDelayTimer) >= 1000)
                                    {
                                        _asyncSequenceStep++;
                                        ;
                                    }
                                };
                            }; /*////////////////////////////////////*/ /*//////////// End delay /////////////*/ /*////////////////////////////////////*/
                            ;
                        }; /*////////////////////////////////////*/ /*//////// End for-loop task /////////*/ /*////////////////////////////////////*/
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
                    }; /*////////////////////////////////////*/ /*/////// End while-loop task ////////*/ /*////////////////////////////////////*/
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
                    ;
                } /*////////////////////////////////////*/ /*////////// End while-loop //////////*/ /*////////////////////////////////////*/;
            } /*////////////////////////////////////*/ /*/////////// End for-loop ///////////*/ /*////////////////////////////////////*/;
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
        }; /*////////////////////////////////////*/ /*/////////// End sequence ///////////*/ /*////////////////////////////////////*/
        if (_asyncSequenceStep == _asyncSequenceCurrentStep)
        {
            _asyncSequenceStep = 0;
        }
    }
# 31 "C:\\Users\\noskn\\Desktop\\Software\\arduino-async-macros\\main\\main.ino"
    ;
    return false;
}

bool updateMainSequence()
{
    {
        static int _asyncSequenceStep = 0;
        static unsigned long _asyncSequenceDelayTimer = 0;
        int _asyncSequenceCurrentStep = 0; /*////////////////////////////////////*/ /*////////// Begin sequence //////////*/ /*////////////////////////////////////*/
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
            ; /*////////////////////////////////////*/ /*///////// Begin while-loop /////////*/ /*////////////////////////////////////*/
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
                ; /*////////////////////////////////////*/ /*////// Begin while-loop task ///////*/ /*////////////////////////////////////*/
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
                    ; /*////////////////////////////////////*/ /*/////////// Begin delay ////////////*/ /*////////////////////////////////////*/
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep++;
                            ;
                            {
                                _asyncSequenceDelayTimer = millis();
                            };
                        };
                    };
                    ;
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            if ((millis() - _asyncSequenceDelayTimer) >= 500)
                            {
                                _asyncSequenceStep++;
                                ;
                            }
                        };
                    }; /*////////////////////////////////////*/ /*//////////// End delay /////////////*/ /*////////////////////////////////////*/
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
                    ; /*////////////////////////////////////*/ /*/////////// Begin delay ////////////*/ /*////////////////////////////////////*/
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep++;
                            ;
                            {
                                _asyncSequenceDelayTimer = millis();
                            };
                        };
                    };
                    ;
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            if ((millis() - _asyncSequenceDelayTimer) >= 500)
                            {
                                _asyncSequenceStep++;
                                ;
                            }
                        };
                    }; /*////////////////////////////////////*/ /*//////////// End delay /////////////*/ /*////////////////////////////////////*/
                    ;
                }; /*////////////////////////////////////*/ /*/////// End while-loop task ////////*/ /*////////////////////////////////////*/
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
                ;
            } /*////////////////////////////////////*/ /*////////// End while-loop //////////*/ /*////////////////////////////////////*/; /*////////////////////////////////////*/ /*////////// Begin for-loop //////////*/ /*////////////////////////////////////*/
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
                ; /*////////////////////////////////////*/ /*///////// Begin while-loop /////////*/ /*////////////////////////////////////*/
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
                    ; /*////////////////////////////////////*/ /*////// Begin while-loop task ///////*/ /*////////////////////////////////////*/
                    { /*////////////////////////////////////*/ /*//////// Begin for-loop task ///////*/ /*////////////////////////////////////*/
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
                            ; /*////////////////////////////////////*/ /*/////////// Begin delay ////////////*/ /*////////////////////////////////////*/
                            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                            {
                                {
                                    _asyncSequenceStep++;
                                    ;
                                    {
                                        _asyncSequenceDelayTimer = millis();
                                    };
                                };
                            };
                            ;
                            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                            {
                                {
                                    if ((millis() - _asyncSequenceDelayTimer) >= 1000)
                                    {
                                        _asyncSequenceStep++;
                                        ;
                                    }
                                };
                            }; /*////////////////////////////////////*/ /*//////////// End delay /////////////*/ /*////////////////////////////////////*/
                            ;
                        }; /*////////////////////////////////////*/ /*//////// End for-loop task /////////*/ /*////////////////////////////////////*/
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
                    }; /*////////////////////////////////////*/ /*/////// End while-loop task ////////*/ /*////////////////////////////////////*/
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
                    ;
                } /*////////////////////////////////////*/ /*////////// End while-loop //////////*/ /*////////////////////////////////////*/;
            } /*////////////////////////////////////*/ /*/////////// End for-loop ///////////*/ /*////////////////////////////////////*/; /*////////////////////////////////////*/ /*///////// Begin while-loop /////////*/ /*////////////////////////////////////*/
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
                ; /*////////////////////////////////////*/ /*////// Begin while-loop task ///////*/ /*////////////////////////////////////*/
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
                                    int _asyncSequenceCurrentStep = 0; /*////////////////////////////////////*/ /*////////// Begin sequence //////////*/ /*////////////////////////////////////*/
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
                                        ; /*////////////////////////////////////*/ /*/////////// Begin delay ////////////*/ /*////////////////////////////////////*/
                                        if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                        {
                                            {
                                                _asyncSequenceStep++;
                                                ;
                                                {
                                                    _asyncSequenceDelayTimer = millis();
                                                };
                                            };
                                        };
                                        ;
                                        if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                        {
                                            {
                                                if ((millis() - _asyncSequenceDelayTimer) >= 1000)
                                                {
                                                    _asyncSequenceStep++;
                                                    ;
                                                }
                                            };
                                        }; /*////////////////////////////////////*/ /*//////////// End delay /////////////*/ /*////////////////////////////////////*/
                                        ;
                                    }; /*////////////////////////////////////*/ /*/////////// End sequence ///////////*/ /*////////////////////////////////////*/
                                    if (_asyncSequenceStep == _asyncSequenceCurrentStep)
                                    {
                                        _asyncSequenceStep = 0;
                                    }
                                };
                            };
                        };
                    };
                    ;
                }; /*////////////////////////////////////*/ /*/////// End while-loop task ////////*/ /*////////////////////////////////////*/
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
                ;
            } /*////////////////////////////////////*/ /*////////// End while-loop //////////*/ /*////////////////////////////////////*/; /*////////////////////////////////////*/ /*///////// Begin while-loop /////////*/ /*////////////////////////////////////*/
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
                ; /*////////////////////////////////////*/ /*////// Begin while-loop task ///////*/ /*////////////////////////////////////*/
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
                                    int _asyncSequenceCurrentStep = 0; /*////////////////////////////////////*/ /*////////// Begin sequence //////////*/ /*////////////////////////////////////*/
                                    { /*////////////////////////////////////*/ /*////////// Begin for-loop //////////*/                                  /*////////////////////////////////////*/
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
                                            ; /*////////////////////////////////////*/ /*///////// Begin while-loop /////////*/ /*////////////////////////////////////*/
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
                                                ; /*////////////////////////////////////*/ /*////// Begin while-loop task ///////*/ /*////////////////////////////////////*/
                                                { /*////////////////////////////////////*/ /*//////// Begin for-loop task ///////*/ /*////////////////////////////////////*/
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
                                                        ; /*////////////////////////////////////*/ /*/////////// Begin delay ////////////*/ /*////////////////////////////////////*/
                                                        if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                                        {
                                                            {
                                                                _asyncSequenceStep++;
                                                                ;
                                                                {
                                                                    _asyncSequenceDelayTimer = millis();
                                                                };
                                                            };
                                                        };
                                                        ;
                                                        if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                                        {
                                                            {
                                                                if ((millis() - _asyncSequenceDelayTimer) >= 2)
                                                                {
                                                                    _asyncSequenceStep++;
                                                                    ;
                                                                }
                                                            };
                                                        }; /*////////////////////////////////////*/ /*//////////// End delay /////////////*/ /*////////////////////////////////////*/
                                                        ;
                                                    }; /*////////////////////////////////////*/ /*//////// End for-loop task /////////*/ /*////////////////////////////////////*/
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
                                                }; /*////////////////////////////////////*/ /*/////// End while-loop task ////////*/ /*////////////////////////////////////*/
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
                                                ;
                                            } /*////////////////////////////////////*/ /*////////// End while-loop //////////*/ /*////////////////////////////////////*/;
                                        } /*////////////////////////////////////*/ /*/////////// End for-loop ///////////*/ /*////////////////////////////////////*/; /*////////////////////////////////////*/ /*////////// Begin for-loop //////////*/ /*////////////////////////////////////*/
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
                                            ; /*////////////////////////////////////*/ /*///////// Begin while-loop /////////*/ /*////////////////////////////////////*/
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
                                                ; /*////////////////////////////////////*/ /*////// Begin while-loop task ///////*/ /*////////////////////////////////////*/
                                                { /*////////////////////////////////////*/ /*//////// Begin for-loop task ///////*/ /*////////////////////////////////////*/
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
                                                        ; /*////////////////////////////////////*/ /*/////////// Begin delay ////////////*/ /*////////////////////////////////////*/
                                                        if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                                        {
                                                            {
                                                                _asyncSequenceStep++;
                                                                ;
                                                                {
                                                                    _asyncSequenceDelayTimer = millis();
                                                                };
                                                            };
                                                        };
                                                        ;
                                                        if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                                        {
                                                            {
                                                                if ((millis() - _asyncSequenceDelayTimer) >= 2)
                                                                {
                                                                    _asyncSequenceStep++;
                                                                    ;
                                                                }
                                                            };
                                                        }; /*////////////////////////////////////*/ /*//////////// End delay /////////////*/ /*////////////////////////////////////*/
                                                        ;
                                                    }; /*////////////////////////////////////*/ /*//////// End for-loop task /////////*/ /*////////////////////////////////////*/
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
                                                }; /*////////////////////////////////////*/ /*/////// End while-loop task ////////*/ /*////////////////////////////////////*/
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
                                                ;
                                            } /*////////////////////////////////////*/ /*////////// End while-loop //////////*/ /*////////////////////////////////////*/;
                                        } /*////////////////////////////////////*/ /*/////////// End for-loop ///////////*/ /*////////////////////////////////////*/
                                    }; /*////////////////////////////////////*/ /*/////////// End sequence ///////////*/    /*////////////////////////////////////*/
                                    if (_asyncSequenceStep == _asyncSequenceCurrentStep)
                                    {
                                        _asyncSequenceStep = 0;
                                    }
                                };
                            };
                        };
                    };
                    ;
                }; /*////////////////////////////////////*/ /*/////// End while-loop task ////////*/ /*////////////////////////////////////*/
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
                ;
            } /*////////////////////////////////////*/ /*////////// End while-loop //////////*/ /*////////////////////////////////////*/;
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
            ; /*////////////////////////////////////*/ /*/////////// Begin delay ////////////*/ /*////////////////////////////////////*/
            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
            {
                {
                    _asyncSequenceStep++;
                    ;
                    {
                        _asyncSequenceDelayTimer = millis();
                    };
                };
            };
            ;
            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
            {
                {
                    if ((millis() - _asyncSequenceDelayTimer) >= 1000)
                    {
                        _asyncSequenceStep++;
                        ;
                    }
                };
            }; /*////////////////////////////////////*/ /*//////////// End delay /////////////*/ /*////////////////////////////////////*/
            ; /*////////////////////////////////////*/ /*///////// Begin while-loop /////////*/  /*////////////////////////////////////*/
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
                ; /*////////////////////////////////////*/ /*////// Begin while-loop task ///////*/ /*////////////////////////////////////*/
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
                    ; /*////////////////////////////////////*/ /*/////////// Begin delay ////////////*/ /*////////////////////////////////////*/
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep++;
                            ;
                            {
                                _asyncSequenceDelayTimer = millis();
                            };
                        };
                    };
                    ;
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            if ((millis() - _asyncSequenceDelayTimer) >= 2000)
                            {
                                _asyncSequenceStep++;
                                ;
                            }
                        };
                    }; /*////////////////////////////////////*/ /*//////////// End delay /////////////*/ /*////////////////////////////////////*/
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
                    ; /*////////////////////////////////////*/ /*/////////// Begin delay ////////////*/ /*////////////////////////////////////*/
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep++;
                            ;
                            {
                                _asyncSequenceDelayTimer = millis();
                            };
                        };
                    };
                    ;
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            if ((millis() - _asyncSequenceDelayTimer) >= 2000)
                            {
                                _asyncSequenceStep++;
                                ;
                            }
                        };
                    }; /*////////////////////////////////////*/ /*//////////// End delay /////////////*/ /*////////////////////////////////////*/
                    ;
                }; /*////////////////////////////////////*/ /*/////// End while-loop task ////////*/ /*////////////////////////////////////*/
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
                ;
            } /*////////////////////////////////////*/ /*////////// End while-loop //////////*/ /*////////////////////////////////////*/;
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
            ; /*////////////////////////////////////*/ /*/////////// Begin delay ////////////*/ /*////////////////////////////////////*/
            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
            {
                {
                    _asyncSequenceStep++;
                    ;
                    {
                        _asyncSequenceDelayTimer = millis();
                    };
                };
            };
            ;
            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
            {
                {
                    if ((millis() - _asyncSequenceDelayTimer) >= 2000)
                    {
                        _asyncSequenceStep++;
                        ;
                    }
                };
            }; /*////////////////////////////////////*/ /*//////////// End delay /////////////*/ /*////////////////////////////////////*/
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
        }; /*////////////////////////////////////*/ /*/////////// End sequence ///////////*/ /*////////////////////////////////////*/
        if (_asyncSequenceStep == _asyncSequenceCurrentStep)
        {
            _asyncSequenceStep = 0;
        }
    }
# 131 "C:\\Users\\noskn\\Desktop\\Software\\arduino-async-macros\\main\\main.ino"
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
        int _asyncSequenceCurrentStep = 0; /*////////////////////////////////////*/ /*////////// Begin sequence //////////*/ /*////////////////////////////////////*/
        { /* Wait for button press*/ /*////////////////////////////////////*/ /*///////// Begin while-loop /////////*/       /*////////////////////////////////////*/
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
                ; /*////////////////////////////////////*/ /*////// Begin while-loop task ///////*/   /*////////////////////////////////////*/
                {}; /*////////////////////////////////////*/ /*/////// End while-loop task ////////*/ /*////////////////////////////////////*/
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
                ;
            } /*////////////////////////////////////*/ /*////////// End while-loop //////////*/ /*////////////////////////////////////*/;
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
            ; /* Debounce delay*/ /*////////////////////////////////////*/ /*/////////// Begin delay ////////////*/ /*////////////////////////////////////*/
            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
            {
                {
                    _asyncSequenceStep++;
                    ;
                    {
                        _asyncSequenceDelayTimer = millis();
                    };
                };
            };
            ;
            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
            {
                {
                    if ((millis() - _asyncSequenceDelayTimer) >= 50)
                    {
                        _asyncSequenceStep++;
                        ;
                    }
                };
            }; /*////////////////////////////////////*/ /*//////////// End delay /////////////*/                             /*////////////////////////////////////*/
            ; /* Wait for button release*/ /*////////////////////////////////////*/ /*///////// Begin while-loop /////////*/ /*////////////////////////////////////*/
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
                ; /*////////////////////////////////////*/ /*////// Begin while-loop task ///////*/   /*////////////////////////////////////*/
                {}; /*////////////////////////////////////*/ /*/////// End while-loop task ////////*/ /*////////////////////////////////////*/
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
                ;
            } /*////////////////////////////////////*/ /*////////// End while-loop //////////*/ /*////////////////////////////////////*/;
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
            ; /* Debounce delay*/ /*////////////////////////////////////*/ /*/////////// Begin delay ////////////*/ /*////////////////////////////////////*/
            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
            {
                {
                    _asyncSequenceStep++;
                    ;
                    {
                        _asyncSequenceDelayTimer = millis();
                    };
                };
            };
            ;
            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
            {
                {
                    if ((millis() - _asyncSequenceDelayTimer) >= 50)
                    {
                        _asyncSequenceStep++;
                        ;
                    }
                };
            }; /*////////////////////////////////////*/ /*//////////// End delay /////////////*/ /*////////////////////////////////////*/
            ;
        }; /*////////////////////////////////////*/ /*/////////// End sequence ///////////*/ /*////////////////////////////////////*/
        if (_asyncSequenceStep == _asyncSequenceCurrentStep)
        {
            _asyncSequenceStep = 0;
        }
    }
# 160 "C:\\Users\\noskn\\Desktop\\Software\\arduino-async-macros\\main\\main.ino"
    ;

    if (updateMainSequence())
    {
        Serial.println("Sequence notified completion");
    }
}

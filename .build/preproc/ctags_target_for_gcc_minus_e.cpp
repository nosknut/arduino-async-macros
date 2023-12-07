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
        while (true)
        { /*////////////////////////////////////*/ /*////////// Begin sequence //////////*/ /*////////////////////////////////////*/
            static int _asyncSequenceStep = 0;
            static unsigned long _asyncSequenceDelayTimer = 0; /* The dry run runs a single empty step without */ /* continuing so that all sequence indexes can be */ /* counted. This is needed for stepAnchors to work. */
            static bool _asyncDryRun = true;
            int _asyncSequenceCurrentStep = 0; /*////////////////////////////////////*/ /*//////// Begin dry run step ////////*/ /*////////////////////////////////////*/
            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
            {
                {
                    if (!_asyncDryRun)
                    {
                        _asyncSequenceStep++;
                        ;
                    }
                };
            }; /*////////////////////////////////////*/ /*//////// End dry run step //////////*/ /*////////////////////////////////////*/ /*////////////////////////////////////*/ /*//////// Begin sequence steps //////*/ /*////////////////////////////////////*/
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
                    ;
                    static bool _asyncForIsFirstRun;
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep++;
                            ;
                            {
                                _asyncForIsFirstRun = true;
                            };
                        };
                    };
                    ;
                    ; /*////////////////////////////////////*/ /*///////// Begin while-loop /////////*/ /*////////////////////////////////////*/
                    {
                        static int _asyncWhileStartAnchor = 0;
                        ;
                        static int _asyncWhileEndAnchor = 0;
                        ;
                        _asyncWhileStartAnchor = _asyncSequenceCurrentStep;
                        if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                        {
                            {
                                if (true)
                                {
                                    _asyncSequenceStep++;
                                    ;
                                }
                                else
                                {
                                    _asyncSequenceStep = _asyncWhileEndAnchor;
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
                                        if (_asyncForIsFirstRun)
                                        {
                                            _asyncForIsFirstRun = false;
                                        }
                                        else
                                        {
                                            i++;
                                        }
                                        if (!(i <= 5))
                                        {
                                            _asyncSequenceStep = _asyncWhileEndAnchor;
                                            ;
                                            ;
                                        }
                                    };
                                };
                            };
                            ; /*////////////////////////////////////*/ /*//////// Begin for-loop task ///////*/ /*////////////////////////////////////*/
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
                        }; /*////////////////////////////////////*/ /*/////// End while-loop task ////////*/     /*////////////////////////////////////*/
                        if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                        {
                            {
                                _asyncSequenceStep = _asyncWhileStartAnchor;
                                ;
                            };
                        };
                        _asyncWhileEndAnchor = _asyncSequenceCurrentStep;
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
            }; /*////////////////////////////////////*/ /*//////// End sequences steps ///////*/ /*////////////////////////////////////*/
            if (_asyncSequenceStep == _asyncSequenceCurrentStep)
            {
                _asyncSequenceStep = 0;
            } /*////////////////////////////////////*/ /*//////// Begin dry run check ////////*/ /*////////////////////////////////////*/
            if (_asyncDryRun)
            {
                _asyncDryRun = false;
                continue;
            }
            else
            {
                break;
            } /*////////////////////////////////////*/ /*//////// End dry run check /////////*/ /*////////////////////////////////////*/
        }
    } /*////////////////////////////////////*/ /*/////////// End sequence ///////////*/ /*////////////////////////////////////*/
# 31 "C:\\Users\\noskn\\Desktop\\Software\\arduino-async-macros\\main\\main.ino"
    ;
    return false;
}

bool updateMainSequence()
{
    {
        while (true)
        { /*////////////////////////////////////*/ /*////////// Begin sequence //////////*/ /*////////////////////////////////////*/
            static int _asyncSequenceStep = 0;
            static unsigned long _asyncSequenceDelayTimer = 0; /* The dry run runs a single empty step without */ /* continuing so that all sequence indexes can be */ /* counted. This is needed for stepAnchors to work. */
            static bool _asyncDryRun = true;
            int _asyncSequenceCurrentStep = 0; /*////////////////////////////////////*/ /*//////// Begin dry run step ////////*/ /*////////////////////////////////////*/
            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
            {
                {
                    if (!_asyncDryRun)
                    {
                        _asyncSequenceStep++;
                        ;
                    }
                };
            }; /*////////////////////////////////////*/ /*//////// End dry run step //////////*/ /*////////////////////////////////////*/ /*////////////////////////////////////*/ /*//////// Begin sequence steps //////*/ /*////////////////////////////////////*/
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
                ; /*////////////////////////////////////*/ /*/////// Begin if-else-statement ////*/  /*////////////////////////////////////*/
                {
                    static bool _asyncIfCondition;
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep++;
                            ;
                            {
                                _asyncIfCondition = digitalRead(BUTTON_PIN);
                            };
                        };
                    };
                    ;
                    ;
                    static int _asyncElseStartAnchor = 0;
                    ;
                    static int _asyncElseEndAnchor = 0;
                    ;
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            if (_asyncIfCondition)
                            {
                                _asyncSequenceStep++;
                                ;
                            }
                            else
                            {
                                _asyncSequenceStep = _asyncElseStartAnchor;
                                ;
                            }
                        };
                    }; /*////////////////////////////////////*/ /*////// Begin if-statement task /////*/ /*////////////////////////////////////*/
                    {
                        if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                        {
                            {
                                _asyncSequenceStep++;
                                ;
                                {
                                    Serial.println("Button is pressed");
                                };
                            };
                        };
                        ;
                    }; /*////////////////////////////////////*/ /*/////// End if-statement task //////*/ /*////////////////////////////////////*/
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep = _asyncElseEndAnchor;
                            ;
                        };
                    };
                    _asyncElseStartAnchor = _asyncSequenceCurrentStep;
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep++;
                            ;
                        };
                    };
                    ; /*////////////////////////////////////*/ /*////// Begin else-statement task ///*/                                                  /*////////////////////////////////////*/
                    {/* empty because this is only an id-statement*/}; /*////////////////////////////////////*/ /*/////// End else-statement task ////*/ /*////////////////////////////////////*/
                    _asyncElseEndAnchor = _asyncSequenceCurrentStep;
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep++;
                            ;
                        };
                    };
                    ;
                } /*////////////////////////////////////*/ /*//////// End if-else-statement /////*/ /*////////////////////////////////////*/; /*////////////////////////////////////*/ /*/////////// Begin delay ////////////*/ /*////////////////////////////////////*/
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
                ; /*////////////////////////////////////*/ /*/////// Begin if-else-statement ////*/  /*////////////////////////////////////*/
                {
                    static bool _asyncIfCondition;
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep++;
                            ;
                            {
                                _asyncIfCondition = digitalRead(BUTTON_PIN);
                            };
                        };
                    };
                    ;
                    ;
                    static int _asyncElseStartAnchor = 0;
                    ;
                    static int _asyncElseEndAnchor = 0;
                    ;
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            if (_asyncIfCondition)
                            {
                                _asyncSequenceStep++;
                                ;
                            }
                            else
                            {
                                _asyncSequenceStep = _asyncElseStartAnchor;
                                ;
                            }
                        };
                    }; /*////////////////////////////////////*/ /*////// Begin if-statement task /////*/ /*////////////////////////////////////*/
                    {
                        if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                        {
                            {
                                _asyncSequenceStep++;
                                ;
                                {
                                    Serial.println("Button is pressed");
                                };
                            };
                        };
                        ;
                    }; /*////////////////////////////////////*/ /*/////// End if-statement task //////*/ /*////////////////////////////////////*/
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep = _asyncElseEndAnchor;
                            ;
                        };
                    };
                    _asyncElseStartAnchor = _asyncSequenceCurrentStep;
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep++;
                            ;
                        };
                    };
                    ; /*////////////////////////////////////*/ /*////// Begin else-statement task ///*/ /*////////////////////////////////////*/
                    {
                        if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                        {
                            {
                                _asyncSequenceStep++;
                                ;
                                {
                                    Serial.println("Button is not pressed");
                                };
                            };
                        };
                        ;
                    }; /*////////////////////////////////////*/ /*/////// End else-statement task ////*/ /*////////////////////////////////////*/
                    _asyncElseEndAnchor = _asyncSequenceCurrentStep;
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep++;
                            ;
                        };
                    };
                    ;
                } /*////////////////////////////////////*/ /*//////// End if-else-statement /////*/ /*////////////////////////////////////*/; /*////////////////////////////////////*/ /*/////////// Begin delay ////////////*/ /*////////////////////////////////////*/
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
                ; /*////////////////////////////////////*/ /*///////// Begin while-loop /////////*/  /*////////////////////////////////////*/
                {
                    static int _asyncWhileStartAnchor = 0;
                    ;
                    static int _asyncWhileEndAnchor = 0;
                    ;
                    _asyncWhileStartAnchor = _asyncSequenceCurrentStep;
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            if (true)
                            {
                                _asyncSequenceStep++;
                                ;
                            }
                            else
                            {
                                _asyncSequenceStep = _asyncWhileEndAnchor;
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
                                    if (digitalRead(BUTTON_PIN))
                                    {
                                        _asyncSequenceStep = _asyncWhileEndAnchor;
                                        ;
                                        ;
                                    }
                                };
                            };
                        };
                        ; /* The next steps get skipped and*/ /* the while loop ends when the button is pressed*/
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
                    }; /*////////////////////////////////////*/ /*/////// End while-loop task ////////*/ /*////////////////////////////////////*/
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep = _asyncWhileStartAnchor;
                            ;
                        };
                    };
                    _asyncWhileEndAnchor = _asyncSequenceCurrentStep;
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep++;
                            ;
                        };
                    };
                    ;
                } /*////////////////////////////////////*/ /*////////// End while-loop //////////*/ /*////////////////////////////////////*/; /* Prints every other number from 0 to 10 with*/ /* a 1 second delay between each*/ /*////////////////////////////////////*/ /*////////// Begin for-loop //////////*/ /*////////////////////////////////////*/
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
                    static bool _asyncForIsFirstRun;
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep++;
                            ;
                            {
                                _asyncForIsFirstRun = true;
                            };
                        };
                    };
                    ;
                    ; /*////////////////////////////////////*/ /*///////// Begin while-loop /////////*/ /*////////////////////////////////////*/
                    {
                        static int _asyncWhileStartAnchor = 0;
                        ;
                        static int _asyncWhileEndAnchor = 0;
                        ;
                        _asyncWhileStartAnchor = _asyncSequenceCurrentStep;
                        if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                        {
                            {
                                if (true)
                                {
                                    _asyncSequenceStep++;
                                    ;
                                }
                                else
                                {
                                    _asyncSequenceStep = _asyncWhileEndAnchor;
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
                                        if (_asyncForIsFirstRun)
                                        {
                                            _asyncForIsFirstRun = false;
                                        }
                                        else
                                        {
                                            i++;
                                        }
                                        if (!(i <= 10))
                                        {
                                            _asyncSequenceStep = _asyncWhileEndAnchor;
                                            ;
                                            ;
                                        }
                                    };
                                };
                            };
                            ; /*////////////////////////////////////*/ /*//////// Begin for-loop task ///////*/ /*////////////////////////////////////*/
                            {
                                if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                {
                                    {
                                        _asyncSequenceStep++;
                                        ;
                                        {
                                            if (i % 2 == 0)
                                            {
                                                _asyncSequenceStep = _asyncWhileStartAnchor;
                                                ;
                                                ;
                                            }
                                        };
                                    };
                                };
                                ; /* The next steps get skipped when i is odd*/
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
                        }; /*////////////////////////////////////*/ /*/////// End while-loop task ////////*/     /*////////////////////////////////////*/
                        if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                        {
                            {
                                _asyncSequenceStep = _asyncWhileStartAnchor;
                                ;
                            };
                        };
                        _asyncWhileEndAnchor = _asyncSequenceCurrentStep;
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
                    static int _asyncWhileStartAnchor = 0;
                    ;
                    static int _asyncWhileEndAnchor = 0;
                    ;
                    _asyncWhileStartAnchor = _asyncSequenceCurrentStep;
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
                                _asyncSequenceStep = _asyncWhileEndAnchor;
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
                            _asyncSequenceStep = _asyncWhileStartAnchor;
                            ;
                        };
                    };
                    _asyncWhileEndAnchor = _asyncSequenceCurrentStep;
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
                    ;
                    static bool _asyncForIsFirstRun;
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep++;
                            ;
                            {
                                _asyncForIsFirstRun = true;
                            };
                        };
                    };
                    ;
                    ; /*////////////////////////////////////*/ /*///////// Begin while-loop /////////*/ /*////////////////////////////////////*/
                    {
                        static int _asyncWhileStartAnchor = 0;
                        ;
                        static int _asyncWhileEndAnchor = 0;
                        ;
                        _asyncWhileStartAnchor = _asyncSequenceCurrentStep;
                        if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                        {
                            {
                                if (true)
                                {
                                    _asyncSequenceStep++;
                                    ;
                                }
                                else
                                {
                                    _asyncSequenceStep = _asyncWhileEndAnchor;
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
                                        if (_asyncForIsFirstRun)
                                        {
                                            _asyncForIsFirstRun = false;
                                        }
                                        else
                                        {
                                            i++;
                                        }
                                        if (!(i <= 5))
                                        {
                                            _asyncSequenceStep = _asyncWhileEndAnchor;
                                            ;
                                            ;
                                        }
                                    };
                                };
                            };
                            ; /*////////////////////////////////////*/ /*//////// Begin for-loop task ///////*/ /*////////////////////////////////////*/
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
                        }; /*////////////////////////////////////*/ /*/////// End while-loop task ////////*/     /*////////////////////////////////////*/
                        if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                        {
                            {
                                _asyncSequenceStep = _asyncWhileStartAnchor;
                                ;
                            };
                        };
                        _asyncWhileEndAnchor = _asyncSequenceCurrentStep;
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
                    static int _asyncWhileStartAnchor = 0;
                    ;
                    static int _asyncWhileEndAnchor = 0;
                    ;
                    _asyncWhileStartAnchor = _asyncSequenceCurrentStep;
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
                                _asyncSequenceStep = _asyncWhileEndAnchor;
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
                                        while (true)
                                        { /*////////////////////////////////////*/ /*////////// Begin sequence //////////*/ /*////////////////////////////////////*/
                                            static int _asyncSequenceStep = 0;
                                            static unsigned long _asyncSequenceDelayTimer = 0; /* The dry run runs a single empty step without */ /* continuing so that all sequence indexes can be */ /* counted. This is needed for stepAnchors to work. */
                                            static bool _asyncDryRun = true;
                                            int _asyncSequenceCurrentStep = 0; /*////////////////////////////////////*/ /*//////// Begin dry run step ////////*/ /*////////////////////////////////////*/
                                            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                            {
                                                {
                                                    if (!_asyncDryRun)
                                                    {
                                                        _asyncSequenceStep++;
                                                        ;
                                                    }
                                                };
                                            }; /*////////////////////////////////////*/ /*//////// End dry run step //////////*/ /*////////////////////////////////////*/ /*////////////////////////////////////*/ /*//////// Begin sequence steps //////*/ /*////////////////////////////////////*/
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
                                            }; /*////////////////////////////////////*/ /*//////// End sequences steps ///////*/ /*////////////////////////////////////*/
                                            if (_asyncSequenceStep == _asyncSequenceCurrentStep)
                                            {
                                                _asyncSequenceStep = 0;
                                            } /*////////////////////////////////////*/ /*//////// Begin dry run check ////////*/ /*////////////////////////////////////*/
                                            if (_asyncDryRun)
                                            {
                                                _asyncDryRun = false;
                                                continue;
                                            }
                                            else
                                            {
                                                break;
                                            } /*////////////////////////////////////*/ /*//////// End dry run check /////////*/ /*////////////////////////////////////*/
                                        }
                                    } /*////////////////////////////////////*/ /*/////////// End sequence ///////////*/ /*////////////////////////////////////*/;
                                };
                            };
                        };
                        ;
                    }; /*////////////////////////////////////*/ /*/////// End while-loop task ////////*/ /*////////////////////////////////////*/
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep = _asyncWhileStartAnchor;
                            ;
                        };
                    };
                    _asyncWhileEndAnchor = _asyncSequenceCurrentStep;
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
                    static int _asyncWhileStartAnchor = 0;
                    ;
                    static int _asyncWhileEndAnchor = 0;
                    ;
                    _asyncWhileStartAnchor = _asyncSequenceCurrentStep;
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
                                _asyncSequenceStep = _asyncWhileEndAnchor;
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
                                        while (true)
                                        { /*////////////////////////////////////*/ /*////////// Begin sequence //////////*/ /*////////////////////////////////////*/
                                            static int _asyncSequenceStep = 0;
                                            static unsigned long _asyncSequenceDelayTimer = 0; /* The dry run runs a single empty step without */ /* continuing so that all sequence indexes can be */ /* counted. This is needed for stepAnchors to work. */
                                            static bool _asyncDryRun = true;
                                            int _asyncSequenceCurrentStep = 0; /*////////////////////////////////////*/ /*//////// Begin dry run step ////////*/ /*////////////////////////////////////*/
                                            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                            {
                                                {
                                                    if (!_asyncDryRun)
                                                    {
                                                        _asyncSequenceStep++;
                                                        ;
                                                    }
                                                };
                                            }; /*////////////////////////////////////*/ /*//////// End dry run step //////////*/ /*////////////////////////////////////*/ /*////////////////////////////////////*/ /*//////// Begin sequence steps //////*/ /*////////////////////////////////////*/
                                            { /*////////////////////////////////////*/ /*////////// Begin for-loop //////////*/                                                                                                                             /*////////////////////////////////////*/
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
                                                    static bool _asyncForIsFirstRun;
                                                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                                    {
                                                        {
                                                            _asyncSequenceStep++;
                                                            ;
                                                            {
                                                                _asyncForIsFirstRun = true;
                                                            };
                                                        };
                                                    };
                                                    ;
                                                    ; /*////////////////////////////////////*/ /*///////// Begin while-loop /////////*/ /*////////////////////////////////////*/
                                                    {
                                                        static int _asyncWhileStartAnchor = 0;
                                                        ;
                                                        static int _asyncWhileEndAnchor = 0;
                                                        ;
                                                        _asyncWhileStartAnchor = _asyncSequenceCurrentStep;
                                                        if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                                        {
                                                            {
                                                                if (true)
                                                                {
                                                                    _asyncSequenceStep++;
                                                                    ;
                                                                }
                                                                else
                                                                {
                                                                    _asyncSequenceStep = _asyncWhileEndAnchor;
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
                                                                        if (_asyncForIsFirstRun)
                                                                        {
                                                                            _asyncForIsFirstRun = false;
                                                                        }
                                                                        else
                                                                        {
                                                                            i++;
                                                                        }
                                                                        if (!(i <= 255))
                                                                        {
                                                                            _asyncSequenceStep = _asyncWhileEndAnchor;
                                                                            ;
                                                                            ;
                                                                        }
                                                                    };
                                                                };
                                                            };
                                                            ; /*////////////////////////////////////*/ /*//////// Begin for-loop task ///////*/ /*////////////////////////////////////*/
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
                                                        }; /*////////////////////////////////////*/ /*/////// End while-loop task ////////*/     /*////////////////////////////////////*/
                                                        if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                                        {
                                                            {
                                                                _asyncSequenceStep = _asyncWhileStartAnchor;
                                                                ;
                                                            };
                                                        };
                                                        _asyncWhileEndAnchor = _asyncSequenceCurrentStep;
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
                                                    ;
                                                    static bool _asyncForIsFirstRun;
                                                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                                    {
                                                        {
                                                            _asyncSequenceStep++;
                                                            ;
                                                            {
                                                                _asyncForIsFirstRun = true;
                                                            };
                                                        };
                                                    };
                                                    ;
                                                    ; /*////////////////////////////////////*/ /*///////// Begin while-loop /////////*/ /*////////////////////////////////////*/
                                                    {
                                                        static int _asyncWhileStartAnchor = 0;
                                                        ;
                                                        static int _asyncWhileEndAnchor = 0;
                                                        ;
                                                        _asyncWhileStartAnchor = _asyncSequenceCurrentStep;
                                                        if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                                        {
                                                            {
                                                                if (true)
                                                                {
                                                                    _asyncSequenceStep++;
                                                                    ;
                                                                }
                                                                else
                                                                {
                                                                    _asyncSequenceStep = _asyncWhileEndAnchor;
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
                                                                        if (_asyncForIsFirstRun)
                                                                        {
                                                                            _asyncForIsFirstRun = false;
                                                                        }
                                                                        else
                                                                        {
                                                                            i--;
                                                                        }
                                                                        if (!(i >= 0))
                                                                        {
                                                                            _asyncSequenceStep = _asyncWhileEndAnchor;
                                                                            ;
                                                                            ;
                                                                        }
                                                                    };
                                                                };
                                                            };
                                                            ; /*////////////////////////////////////*/ /*//////// Begin for-loop task ///////*/ /*////////////////////////////////////*/
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
                                                        }; /*////////////////////////////////////*/ /*/////// End while-loop task ////////*/     /*////////////////////////////////////*/
                                                        if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                                                        {
                                                            {
                                                                _asyncSequenceStep = _asyncWhileStartAnchor;
                                                                ;
                                                            };
                                                        };
                                                        _asyncWhileEndAnchor = _asyncSequenceCurrentStep;
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
                                            }; /*////////////////////////////////////*/ /*//////// End sequences steps ///////*/    /*////////////////////////////////////*/
                                            if (_asyncSequenceStep == _asyncSequenceCurrentStep)
                                            {
                                                _asyncSequenceStep = 0;
                                            } /*////////////////////////////////////*/ /*//////// Begin dry run check ////////*/ /*////////////////////////////////////*/
                                            if (_asyncDryRun)
                                            {
                                                _asyncDryRun = false;
                                                continue;
                                            }
                                            else
                                            {
                                                break;
                                            } /*////////////////////////////////////*/ /*//////// End dry run check /////////*/ /*////////////////////////////////////*/
                                        }
                                    } /*////////////////////////////////////*/ /*/////////// End sequence ///////////*/ /*////////////////////////////////////*/;
                                };
                            };
                        };
                        ;
                    }; /*////////////////////////////////////*/ /*/////// End while-loop task ////////*/ /*////////////////////////////////////*/
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep = _asyncWhileStartAnchor;
                            ;
                        };
                    };
                    _asyncWhileEndAnchor = _asyncSequenceCurrentStep;
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep++;
                            ;
                        };
                    };
                    ;
                } /*////////////////////////////////////*/ /*////////// End while-loop //////////*/ /*////////////////////////////////////*/; /* Flash for 5 seconds*/ /*////////////////////////////////////*/ /*///// Begin while-duration-loop ////*/ /*////////////////////////////////////*/
                {
                    static unsigned long _asyncSequenceWhileDurationTimer;
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep++;
                            ;
                            {
                                _asyncSequenceWhileDurationTimer = 0;
                            };
                        };
                    };
                    ;
                    ;
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep++;
                            ;
                            {
                                _asyncSequenceWhileDurationTimer = millis();
                            };
                        };
                    };
                    ; /*////////////////////////////////////*/ /*///////// Begin while-loop /////////*/ /*////////////////////////////////////*/
                    {
                        static int _asyncWhileStartAnchor = 0;
                        ;
                        static int _asyncWhileEndAnchor = 0;
                        ;
                        _asyncWhileStartAnchor = _asyncSequenceCurrentStep;
                        if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                        {
                            {
                                if ((millis() - _asyncSequenceWhileDurationTimer) < 5000)
                                {
                                    _asyncSequenceStep++;
                                    ;
                                }
                                else
                                {
                                    _asyncSequenceStep = _asyncWhileEndAnchor;
                                    ;
                                }
                            };
                        };
                        ; /*////////////////////////////////////*/ /*////// Begin while-loop task ///////*/ /*////////////////////////////////////*/
                        {
                            {
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
                            };
                        }; /*////////////////////////////////////*/ /*/////// End while-loop task ////////*/ /*////////////////////////////////////*/
                        if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                        {
                            {
                                _asyncSequenceStep = _asyncWhileStartAnchor;
                                ;
                            };
                        };
                        _asyncWhileEndAnchor = _asyncSequenceCurrentStep;
                        if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                        {
                            {
                                _asyncSequenceStep++;
                                ;
                            };
                        };
                        ;
                    } /*////////////////////////////////////*/ /*////////// End while-loop //////////*/ /*////////////////////////////////////*/;
                } /*////////////////////////////////////*/ /*////// End while-duration-loop /////*/ /*////////////////////////////////////*/;
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
                    static int _asyncWhileStartAnchor = 0;
                    ;
                    static int _asyncWhileEndAnchor = 0;
                    ;
                    _asyncWhileStartAnchor = _asyncSequenceCurrentStep;
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
                                _asyncSequenceStep = _asyncWhileEndAnchor;
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
                            _asyncSequenceStep = _asyncWhileStartAnchor;
                            ;
                        };
                    };
                    _asyncWhileEndAnchor = _asyncSequenceCurrentStep;
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
            }; /*////////////////////////////////////*/ /*//////// End sequences steps ///////*/ /*////////////////////////////////////*/
            if (_asyncSequenceStep == _asyncSequenceCurrentStep)
            {
                _asyncSequenceStep = 0;
            } /*////////////////////////////////////*/ /*//////// Begin dry run check ////////*/ /*////////////////////////////////////*/
            if (_asyncDryRun)
            {
                _asyncDryRun = false;
                continue;
            }
            else
            {
                break;
            } /*////////////////////////////////////*/ /*//////// End dry run check /////////*/ /*////////////////////////////////////*/
        }
    } /*////////////////////////////////////*/ /*/////////// End sequence ///////////*/ /*////////////////////////////////////*/
# 196 "C:\\Users\\noskn\\Desktop\\Software\\arduino-async-macros\\main\\main.ino"
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
        while (true)
        { /*////////////////////////////////////*/ /*////////// Begin sequence //////////*/ /*////////////////////////////////////*/
            static int _asyncSequenceStep = 0;
            static unsigned long _asyncSequenceDelayTimer = 0; /* The dry run runs a single empty step without */ /* continuing so that all sequence indexes can be */ /* counted. This is needed for stepAnchors to work. */
            static bool _asyncDryRun = true;
            int _asyncSequenceCurrentStep = 0; /*////////////////////////////////////*/ /*//////// Begin dry run step ////////*/ /*////////////////////////////////////*/
            if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
            {
                {
                    if (!_asyncDryRun)
                    {
                        _asyncSequenceStep++;
                        ;
                    }
                };
            }; /*////////////////////////////////////*/ /*//////// End dry run step //////////*/ /*////////////////////////////////////*/ /*////////////////////////////////////*/ /*//////// Begin sequence steps //////*/ /*////////////////////////////////////*/
            { /* Wait for button press*/ /*////////////////////////////////////*/ /*///////// Begin while-loop /////////*/                                                                                                  /*////////////////////////////////////*/
                {
                    static int _asyncWhileStartAnchor = 0;
                    ;
                    static int _asyncWhileEndAnchor = 0;
                    ;
                    _asyncWhileStartAnchor = _asyncSequenceCurrentStep;
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
                                _asyncSequenceStep = _asyncWhileEndAnchor;
                                ;
                            }
                        };
                    };
                    ; /*////////////////////////////////////*/ /*////// Begin while-loop task ///////*/   /*////////////////////////////////////*/
                    {}; /*////////////////////////////////////*/ /*/////// End while-loop task ////////*/ /*////////////////////////////////////*/
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep = _asyncWhileStartAnchor;
                            ;
                        };
                    };
                    _asyncWhileEndAnchor = _asyncSequenceCurrentStep;
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
                    static int _asyncWhileStartAnchor = 0;
                    ;
                    static int _asyncWhileEndAnchor = 0;
                    ;
                    _asyncWhileStartAnchor = _asyncSequenceCurrentStep;
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
                                _asyncSequenceStep = _asyncWhileEndAnchor;
                                ;
                            }
                        };
                    };
                    ; /*////////////////////////////////////*/ /*////// Begin while-loop task ///////*/   /*////////////////////////////////////*/
                    {}; /*////////////////////////////////////*/ /*/////// End while-loop task ////////*/ /*////////////////////////////////////*/
                    if (_asyncSequenceStep == _asyncSequenceCurrentStep++)
                    {
                        {
                            _asyncSequenceStep = _asyncWhileStartAnchor;
                            ;
                        };
                    };
                    _asyncWhileEndAnchor = _asyncSequenceCurrentStep;
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
            }; /*////////////////////////////////////*/ /*//////// End sequences steps ///////*/ /*////////////////////////////////////*/
            if (_asyncSequenceStep == _asyncSequenceCurrentStep)
            {
                _asyncSequenceStep = 0;
            } /*////////////////////////////////////*/ /*//////// Begin dry run check ////////*/ /*////////////////////////////////////*/
            if (_asyncDryRun)
            {
                _asyncDryRun = false;
                continue;
            }
            else
            {
                break;
            } /*////////////////////////////////////*/ /*//////// End dry run check /////////*/ /*////////////////////////////////////*/
        }
    } /*////////////////////////////////////*/ /*/////////// End sequence ///////////*/ /*////////////////////////////////////*/
# 225 "C:\\Users\\noskn\\Desktop\\Software\\arduino-async-macros\\main\\main.ino"
    ;

    if (updateMainSequence())
    {
        Serial.println("Sequence notified completion");
    }
}

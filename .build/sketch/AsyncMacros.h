#line 1 "C:\\Users\\noskn\\Desktop\\Software\\arduino-async-macros\\main\\AsyncMacros.h"
// #ifndef SEQUENCE_MACROS_h
// #define SEQUENCE_MACROS_h

/*
Creates an async context to keep track of what code should run
Can contain:
- asyncRun
- asyncDelay
- asyncVariable
- asyncWhile
- asyncFor
*/
#define asyncBegin(task)                                     \
    {                                                        \
        static int _asyncSequenceStep = 0;                   \
        static unsigned long _asyncSequenceDelayTimer = 0;   \
        int _asyncSequenceCurrentStep = 0;                   \
                                                             \
        /*////////////////////////////////////*/             \
        /*////////// Begin sequence //////////*/             \
        /*////////////////////////////////////*/             \
        task;                                                \
        /*////////////////////////////////////*/             \
        /*/////////// End sequence ///////////*/             \
        /*////////////////////////////////////*/             \
                                                             \
        if (_asyncSequenceStep == _asyncSequenceCurrentStep) \
        {                                                    \
            _asyncSequenceStep = 0;                          \
        }                                                    \
    }

// Do not use this, or any other async macro starting with _
#define _asyncStep(task)                                   \
    if (_asyncSequenceStep == _asyncSequenceCurrentStep++) \
    {                                                      \
        task;                                              \
    }

// Do not use this, or any other async macro starting with _
#define _asyncNamedStep(stepAnchor, task)   \
    stepAnchor = _asyncSequenceCurrentStep; \
    _asyncStep(task);

// Do not use this, or any other async macro starting with _
#define _asyncNext() _asyncSequenceStep++;

// Do not use this, or any other async macro starting with _
#define _asyncGoto(goToStep) _asyncSequenceStep = goToStep;

// Do not use this, or any other async macro starting with _
#define _asyncCreateStepAnchor(anchorName) static int anchorName = 0;

/*
Runs regular code
Can contain:
- asyncBegin
- regular code
*/
#define asyncRun(task) \
    _asyncStep({       \
        _asyncNext();  \
        task;          \
    });

#define asyncDelay(delayTime)                                   \
    /*////////////////////////////////////*/                    \
    /*/////////// Begin delay ////////////*/                    \
    /*////////////////////////////////////*/                    \
    asyncRun({                                                  \
        _asyncSequenceDelayTimer = millis();                    \
    });                                                         \
                                                                \
    _asyncStep({                                                \
        if ((millis() - _asyncSequenceDelayTimer) >= delayTime) \
        {                                                       \
            _asyncNext();                                       \
        }                                                       \
    });                                                         \
    /*////////////////////////////////////*/                    \
    /*//////////// End delay /////////////*/                    \
    /*////////////////////////////////////*/

#define asyncVariable(variableType, variableName, initialValue) \
    static variableType variableName;                           \
    asyncRun({                                                  \
        variableName = initialValue;                            \
    });

/*
A regular while-loop
Can contain:
- asyncRun
- asyncDelay
- asyncVariable
- asyncWhile
- asyncFor
Condition can be:
- regular code
*/
#define asyncWhile(condition, task)               \
    /*////////////////////////////////////*/      \
    /*///////// Begin while-loop /////////*/      \
    /*////////////////////////////////////*/      \
    {                                             \
        _asyncCreateStepAnchor(WhileStartAnchor); \
        _asyncCreateStepAnchor(WhileEndAnchor);   \
                                                  \
        _asyncNamedStep(WhileStartAnchor, {       \
            if (condition)                        \
            {                                     \
                _asyncNext();                     \
            }                                     \
            else                                  \
            {                                     \
                _asyncGoto(WhileEndAnchor);       \
            }                                     \
        });                                       \
                                                  \
        /*////////////////////////////////////*/  \
        /*////// Begin while-loop task ///////*/  \
        /*////////////////////////////////////*/  \
        task;                                     \
        /*////////////////////////////////////*/  \
        /*/////// End while-loop task ////////*/  \
        /*////////////////////////////////////*/  \
                                                  \
        _asyncStep({                              \
            _asyncGoto(WhileStartAnchor);         \
        });                                       \
                                                  \
        _asyncNamedStep(WhileEndAnchor, {         \
            _asyncNext();                         \
        });                                       \
    }                                             \
    /*////////////////////////////////////*/      \
    /*////////// End while-loop //////////*/      \
    /*////////////////////////////////////*/

/*
A regular for-loop
Condition can be:
- regular code
Increment can be:
- regular code
Can contain:
- asyncRun
- asyncDelay
- asyncVariable
- asyncWhile
- asyncFor
*/
#define asyncFor(variableType, variableName, initialValue, condition, increment, task) \
    /*////////////////////////////////////*/                                           \
    /*////////// Begin for-loop //////////*/                                           \
    /*////////////////////////////////////*/                                           \
    {                                                                                  \
        asyncVariable(variableType, variableName, initialValue);                       \
        asyncWhile(condition, {                                                        \
            /*////////////////////////////////////*/                                   \
            /*//////// Begin for-loop task ///////*/                                   \
            /*////////////////////////////////////*/                                   \
            task;                                                                      \
            /*////////////////////////////////////*/                                   \
            /*//////// End for-loop task /////////*/                                   \
            /*////////////////////////////////////*/                                   \
                                                                                       \
            asyncRun({                                                                 \
                increment;                                                             \
            });                                                                        \
        });                                                                            \
    }                                                                                  \
    /*////////////////////////////////////*/                                           \
    /*/////////// End for-loop ///////////*/                                           \
    /*////////////////////////////////////*/

/*
A while loop that runs for a given duration
Can contain:
- asyncRun
- asyncDelay
- asyncVariable
- asyncWhile
- asyncFor
Condition can be:
- regular code
*/
#define asyncRunFor(duration, task)                                 \
    /*////////////////////////////////////*/                        \
    /*//////// Begin run-for-loop ////////*/                        \
    /*////////////////////////////////////*/                        \
    asyncRun({                                                      \
        _asyncSequenceDelayTimer = millis();                        \
    });                                                             \
    asyncWhile((millis() - _asyncSequenceDelayTimer) < delayTime, { \
        task;                                                       \
    });                                                             \
    /*////////////////////////////////////*/                        \
    /*///////// End run-for-loop /////////*/                        \
    /*////////////////////////////////////*/

// #endif

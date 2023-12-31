#line 1 "C:\\Users\\noskn\\Desktop\\Software\\arduino-async-macros\\main\\AsyncMacros.h"
#ifndef SEQUENCE_MACROS_h
#define SEQUENCE_MACROS_h

// Do not use this, or any other async macro starting with _
#define _asyncStep(task)                                   \
    if (_asyncSequenceStep == _asyncSequenceCurrentStep++) \
    {                                                      \
        task;                                              \
    }

// Do not use this, or any other async macro starting with _
#define _asyncNext() _asyncSequenceStep++;

/*
Creates an async context to keep track of what code should run
Can contain:
- asyncRun
- asyncDelay
- asyncVariable
- asyncWhile
- asyncFor
- asyncWhileDuration
- asyncIf
- asyncIfElse
*/
#define asyncBegin(task)                                           \
    {                                                              \
        while (true)                                               \
        {                                                          \
            /*////////////////////////////////////*/               \
            /*////////// Begin sequence //////////*/               \
            /*////////////////////////////////////*/               \
            static int _asyncSequenceStep = 0;                     \
            static unsigned long _asyncSequenceDelayTimer = 0;     \
                                                                   \
            /* The dry run runs a single empty step without */     \
            /* continuing so that all sequence indexes can be */   \
            /* counted. This is needed for stepAnchors to work. */ \
            static bool _asyncDryRun = true;                       \
                                                                   \
            int _asyncSequenceCurrentStep = 0;                     \
                                                                   \
            /*////////////////////////////////////*/               \
            /*//////// Begin dry run step ////////*/               \
            /*////////////////////////////////////*/               \
            _asyncStep({                                           \
                if (!_asyncDryRun)                                 \
                {                                                  \
                    _asyncNext();                                  \
                }                                                  \
            });                                                    \
            /*////////////////////////////////////*/               \
            /*//////// End dry run step //////////*/               \
            /*////////////////////////////////////*/               \
                                                                   \
            /*////////////////////////////////////*/               \
            /*//////// Begin sequence steps //////*/               \
            /*////////////////////////////////////*/               \
                                                                   \
            task;                                                  \
                                                                   \
            /*////////////////////////////////////*/               \
            /*//////// End sequences steps ///////*/               \
            /*////////////////////////////////////*/               \
                                                                   \
            if (_asyncSequenceStep == _asyncSequenceCurrentStep)   \
            {                                                      \
                _asyncSequenceStep = 0;                            \
            }                                                      \
                                                                   \
            /*////////////////////////////////////*/               \
            /*//////// Begin dry run check ////////*/              \
            /*////////////////////////////////////*/               \
            if (_asyncDryRun)                                      \
            {                                                      \
                _asyncDryRun = false;                              \
                continue;                                          \
            }                                                      \
            else                                                   \
            {                                                      \
                break;                                             \
            }                                                      \
            /*////////////////////////////////////*/               \
            /*//////// End dry run check /////////*/               \
            /*////////////////////////////////////*/               \
        }                                                          \
    }                                                              \
    /*////////////////////////////////////*/                       \
    /*/////////// End sequence ///////////*/                       \
    /*////////////////////////////////////*/

// Do not use this, or any other async macro starting with _
#define _asyncNamedStep(stepAnchor, task)   \
    stepAnchor = _asyncSequenceCurrentStep; \
    _asyncStep(task);

// Do not use this, or any other async macro starting with _
#define _asyncGoto(goToStep) _asyncSequenceStep = goToStep;

// Do not use this, or any other async macro starting with _
#define _asyncCreateStepAnchor(anchorName) static int anchorName = 0;

/*
Runs regular code
Can contain:
- asyncBegin (when inside an asyncWhile that contains no delays)
- asyncContinue
- asyncBreak
- regular code
*/
#define asyncRun(task) \
    _asyncStep({       \
        _asyncNext();  \
        task;          \
    });

// Delays the sequence for a given amount of time
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

// Creates a variable that behaves like a regular local
// variable throughout a run of the sequence.
#define asyncVariable(variableType, variableName, initialValue) \
    static variableType variableName;                           \
    asyncRun({                                                  \
        variableName = initialValue;                            \
    });

/*
A regular if-else-statement
Condition can be:
- regular code
Can contain:
- asyncRun
- asyncDelay
- asyncVariable
- asyncWhile
- asyncFor
- asyncWhileDuration
- asyncIf
- asyncIfElse
*/
#define asyncIfElse(condition, ifTask, elseTask)           \
    /*////////////////////////////////////*/               \
    /*/////// Begin if-else-statement ////*/               \
    /*////////////////////////////////////*/               \
    {                                                      \
        asyncVariable(bool, _asyncIfCondition, condition); \
                                                           \
        _asyncCreateStepAnchor(_asyncElseStartAnchor);     \
        _asyncCreateStepAnchor(_asyncElseEndAnchor);       \
                                                           \
        _asyncStep({                                       \
            if (_asyncIfCondition)                         \
            {                                              \
                _asyncNext();                              \
            }                                              \
            else                                           \
            {                                              \
                _asyncGoto(_asyncElseStartAnchor);         \
            }                                              \
        });                                                \
                                                           \
        /*////////////////////////////////////*/           \
        /*////// Begin if-statement task /////*/           \
        /*////////////////////////////////////*/           \
        ifTask;                                            \
        /*////////////////////////////////////*/           \
        /*/////// End if-statement task //////*/           \
        /*////////////////////////////////////*/           \
                                                           \
        _asyncStep({                                       \
            _asyncGoto(_asyncElseEndAnchor);               \
        });                                                \
                                                           \
        _asyncNamedStep(_asyncElseStartAnchor, {           \
            _asyncNext();                                  \
        });                                                \
                                                           \
        /*////////////////////////////////////*/           \
        /*////// Begin else-statement task ///*/           \
        /*////////////////////////////////////*/           \
        elseTask;                                          \
        /*////////////////////////////////////*/           \
        /*/////// End else-statement task ////*/           \
        /*////////////////////////////////////*/           \
                                                           \
        _asyncNamedStep(_asyncElseEndAnchor, {             \
            _asyncNext();                                  \
        });                                                \
    }                                                      \
    /*////////////////////////////////////*/               \
    /*//////// End if-else-statement /////*/               \
    /*////////////////////////////////////*/

/*
A regular if-statement
Condition can be:
- regular code
Can contain:
- asyncRun
- asyncDelay
- asyncVariable
- asyncWhile
- asyncFor
- asyncWhileDuration
- asyncIf
- asyncIfElse
*/
#define asyncIf(condition, ifTask) \
    asyncIfElse(condition, ifTask, {/* empty because this is only an id-statement*/})

/*
A regular while-loop
Condition can be:
- regular code
Can contain:
- asyncRun
- asyncDelay
- asyncVariable
- asyncWhile
- asyncFor
- asyncWhileDuration
- asyncIf
- asyncIfElse
*/
#define asyncWhile(condition, task)                     \
    /*////////////////////////////////////*/            \
    /*///////// Begin while-loop /////////*/            \
    /*////////////////////////////////////*/            \
    {                                                   \
        _asyncCreateStepAnchor(_asyncWhileStartAnchor); \
        _asyncCreateStepAnchor(_asyncWhileEndAnchor);   \
                                                        \
        _asyncNamedStep(_asyncWhileStartAnchor, {       \
            if (condition)                              \
            {                                           \
                _asyncNext();                           \
            }                                           \
            else                                        \
            {                                           \
                _asyncGoto(_asyncWhileEndAnchor);       \
            }                                           \
        });                                             \
                                                        \
        /*////////////////////////////////////*/        \
        /*////// Begin while-loop task ///////*/        \
        /*////////////////////////////////////*/        \
        task;                                           \
        /*////////////////////////////////////*/        \
        /*/////// End while-loop task ////////*/        \
        /*////////////////////////////////////*/        \
                                                        \
        _asyncStep({                                    \
            _asyncGoto(_asyncWhileStartAnchor);         \
        });                                             \
                                                        \
        _asyncNamedStep(_asyncWhileEndAnchor, {         \
            _asyncNext();                               \
        });                                             \
    }                                                   \
    /*////////////////////////////////////*/            \
    /*////////// End while-loop //////////*/            \
    /*////////////////////////////////////*/

/*
Exits the current while or for-loop
Can only be used inside asyncRun({ });

NB!
This will skip the next step in the sequence,
it will not skip the remaining code inside the current asyncRun({ }).
*/
#define asyncBreak() \
    _asyncGoto(_asyncWhileEndAnchor);

/*
Restarts the current while or for-loop
Can only be used inside asyncRun({ });

NB!
This will skip the next step in the sequence,
it will not skip the remaining code inside the current asyncRun({ }).
*/
#define asyncContinue() \
    _asyncGoto(_asyncWhileStartAnchor);

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
- asyncWhileDuration
- asyncIf
- asyncIfElse
*/
#define asyncFor(variableType, variableName, initialValue, condition, increment, task) \
    /*////////////////////////////////////*/                                           \
    /*////////// Begin for-loop //////////*/                                           \
    /*////////////////////////////////////*/                                           \
    {                                                                                  \
        asyncVariable(variableType, variableName, initialValue);                       \
        asyncVariable(bool, _asyncForIsFirstRun, true);                                \
        asyncWhile(true, {                                                             \
            asyncRun({                                                                 \
                if (_asyncForIsFirstRun)                                               \
                {                                                                      \
                    _asyncForIsFirstRun = false;                                       \
                }                                                                      \
                else                                                                   \
                {                                                                      \
                    increment;                                                         \
                }                                                                      \
                                                                                       \
                if (!(condition))                                                      \
                {                                                                      \
                    asyncBreak();                                                      \
                }                                                                      \
            });                                                                        \
                                                                                       \
            /*////////////////////////////////////*/                                   \
            /*//////// Begin for-loop task ///////*/                                   \
            /*////////////////////////////////////*/                                   \
            task;                                                                      \
            /*////////////////////////////////////*/                                   \
            /*//////// End for-loop task /////////*/                                   \
            /*////////////////////////////////////*/                                   \
        });                                                                            \
    }                                                                                  \
    /*////////////////////////////////////*/                                           \
    /*/////////// End for-loop ///////////*/                                           \
    /*////////////////////////////////////*/

/*
A while loop that runs for a given duration.

The contents of the loop will always run to the end,
meaning if the duration is 1.5 sec and there is a 1 sec
delay in the loop, the loop will run for 2 sec since it
would end up running 2x1 sec delays.

Can contain:
- asyncRun
- asyncDelay
- asyncVariable
- asyncWhile
- asyncFor
- asyncWhileDuration
- asyncIf
- asyncIfElse
Condition can be:
- regular code
*/
#define asyncWhileDuration(duration, task)                                     \
    /*////////////////////////////////////*/                                   \
    /*///// Begin while-duration-loop ////*/                                   \
    /*////////////////////////////////////*/                                   \
    {                                                                          \
        asyncVariable(unsigned long, _asyncSequenceWhileDurationTimer, 0);     \
        asyncRun({                                                             \
            _asyncSequenceWhileDurationTimer = millis();                       \
        });                                                                    \
        asyncWhile((millis() - _asyncSequenceWhileDurationTimer) < duration, { \
            task;                                                              \
        });                                                                    \
    }                                                                          \
    /*////////////////////////////////////*/                                   \
    /*////// End while-duration-loop /////*/                                   \
    /*////////////////////////////////////*/

#endif

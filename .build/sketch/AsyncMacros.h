#line 1 "C:\\Users\\noskn\\Desktop\\Software\\arduino-macro-sequence\\main\\AsyncMacros.h"
#ifndef SEQUENCE_MACROS_h
#define SEQUENCE_MACROS_h

#define asyncBegin(task)                                     \
    {                                                        \
        static int _asyncSequenceStep = 0;                   \
        static unsigned long _asyncSequenceDelayTimer = 0;   \
        int _asyncSequenceCurrentStep = 0;                   \
        task;                                                \
                                                             \
        if (_asyncSequenceStep == _asyncSequenceCurrentStep) \
        {                                                    \
            _asyncSequenceStep = 0;                          \
        }                                                    \
    }

// Do not use macros starting with _
#define _asyncStep(task)                                   \
    if (_asyncSequenceStep == _asyncSequenceCurrentStep++) \
    {                                                      \
        task;                                              \
    }

// Do not use macros starting with _
#define _asyncNamedStep(stepAnchor, task)                  \
    stepAnchor = _asyncSequenceCurrentStep;                \
    if (_asyncSequenceStep == _asyncSequenceCurrentStep++) \
    {                                                      \
        task;                                              \
    }

// Do not use macros starting with _
#define _asyncNext() _asyncSequenceStep++;

// Do not use macros starting with _
#define _asyncGoto(goToStep) _asyncSequenceStep = goToStep;

// Do not use macros starting with _
#define _asyncCreateStepAnchor(anchorName) int anchorName = 0;

#define asyncRun(task) \
    _asyncStep({       \
        _asyncNext();  \
        task;          \
    });

#define asyncDelay(delayTime)                                   \
    _asyncStep({                                                \
        _asyncSequenceDelayTimer = millis();                    \
        _asyncNext();                                           \
    });                                                         \
                                                                \
    _asyncStep({                                                \
        if ((millis() - _asyncSequenceDelayTimer) >= delayTime) \
        {                                                       \
            _asyncNext();                                       \
        }                                                       \
    });

#define asyncVariable(variableType, variableName, initialValue) \
    static variableType variableName;                           \
    asyncRun({                                                  \
        variableName = initialValue;                            \
    });

#define asyncWhile(condition, task)                      \
    {                                                    \
        static _asyncCreateStepAnchor(WhileStartAnchor); \
        static _asyncCreateStepAnchor(WhileEndAnchor);   \
                                                         \
        _asyncNamedStep(WhileStartAnchor, {              \
            if (condition)                               \
            {                                            \
                _asyncNext();                            \
            }                                            \
            else                                         \
            {                                            \
                _asyncGoto(WhileEndAnchor);              \
            }                                            \
        });                                              \
                                                         \
        task;                                            \
                                                         \
        _asyncStep({                                     \
            _asyncGoto(WhileStartAnchor);                \
        });                                              \
                                                         \
        _asyncNamedStep(WhileEndAnchor, {                \
            _asyncNext();                                \
        });                                              \
    }

#define asyncFor(variableType, variableName, initialValue, condition, increment, task) \
    {                                                                                  \
        asyncVariable(variableType, variableName, initialValue);                       \
        asyncWhile(condition, {                                                        \
            task;                                                                      \
                                                                                       \
            asyncRun({                                                                 \
                increment;                                                             \
            });                                                                        \
        });                                                                            \
    }

#endif

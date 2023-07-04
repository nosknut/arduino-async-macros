#line 1 "C:\\Users\\noskn\\Desktop\\Software\\arduino-macro-sequence\\main\\AsyncMacros.h"
#ifndef SEQUENCE_MACROS_h
#define SEQUENCE_MACROS_h

#define asyncBegin(sequenceName, task)                                       \
    {                                                                        \
        static int sequenceName##SequenceStep = 0;                           \
        static unsigned long sequenceName##DelayTimer = 0;                   \
        int sequenceName##SequenceCurrentStep = 0;                           \
        task;                                                                \
        if (sequenceName##SequenceStep == sequenceName##SequenceCurrentStep) \
        {                                                                    \
            sequenceName##SequenceStep = 0;                                  \
        }                                                                    \
    }

#define _step(sequenceName) \
    if (sequenceName##SequenceStep == sequenceName##SequenceCurrentStep++)

#define _namedStep(sequenceName, stepAnchor, task)                         \
    stepAnchor = sequenceName##SequenceCurrentStep;                        \
    if (sequenceName##SequenceStep == sequenceName##SequenceCurrentStep++) \
    {                                                                      \
        task;                                                              \
    }

#define _next(sequenceName) sequenceName##SequenceStep++;

#define _previous(sequenceName) sequenceName##SequenceStep--;

#define _restart(sequenceName) sequenceName##SequenceStep = 0;

#define _goto(sequenceName, goToStep) sequenceName##SequenceStep = goToStep;

#define _createStepAnchor(anchorName) int anchorName = 0;

#define asyncRun(sequenceName, task) \
    _step(sequenceName)              \
    {                                \
        task;                        \
        _next(sequenceName);         \
    }

#define asyncDelay(sequenceName, delayTime)                     \
    _step(sequenceName)                                         \
    {                                                           \
        sequenceName##DelayTimer = millis();                    \
        _next(sequenceName);                                    \
    }                                                           \
    _step(sequenceName)                                         \
    {                                                           \
        if ((millis() - sequenceName##DelayTimer) >= delayTime) \
        {                                                       \
            _next(sequenceName);                                \
        }                                                       \
    }

#define asyncWhile(sequenceName, condition, task)                  \
    {                                                              \
        static _createStepAnchor(sequenceName##WhileStartAnchor);  \
        static _createStepAnchor(sequenceName##WhileEndAnchor);    \
                                                                   \
        _namedStep(sequenceName, sequenceName##WhileStartAnchor, { \
            if (condition)                                         \
            {                                                      \
                _next(sequenceName);                               \
            }                                                      \
            else                                                   \
            {                                                      \
                _goto(sequenceName, sequenceName##WhileEndAnchor); \
            }                                                      \
        });                                                        \
                                                                   \
        task;                                                      \
                                                                   \
        _step(sequenceName)                                        \
        {                                                          \
            _goto(sequenceName, sequenceName##WhileStartAnchor);   \
        }                                                          \
                                                                   \
        _namedStep(sequenceName, sequenceName##WhileEndAnchor, {   \
            _next(sequenceName);                                   \
        });                                                        \
    }

#define asyncFor(sequenceName, variableType, variableName, initialValue, condition, increment, task) \
    {                                                                                                \
        asyncVariable(sequenceName, variableType, variableName, initialValue);                       \
        asyncWhile(sequenceName, condition, {                                                        \
            task;                                                                                    \
            asyncRun(sequenceName, {                                                                 \
                increment;                                                                           \
            });                                                                                      \
        });                                                                                          \
    }

#define asyncVariable(sequenceName, variableType, variableName, initialValue) \
    static variableType variableName;                                         \
    asyncRun(sequenceName, {                                                  \
        variableName = initialValue;                                          \
    });

#endif

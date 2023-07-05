# Async Macros

A zero cost abstraction for asynchronous arduino code without using threads or complex switch statements.

## Results

- [Before preprocessor](main/main.ino)
- [After preprocessor](.build/preproc/ctags_target_for_gcc_minus_e.cpp)
    - NB! The extra semicolons in the preprocessor output are just there to make auto-formatters happy. They should not have any affect on the code.

## Pros

- Cleaner code

## Drawbacks

- IDE compiler error highlighting is broken
  - Any bugs will be fed through the macro, and so the
    only way to see errors is in the compiler logs.

## Example

`main` and `print` are unique handles for each sequence. This allows for nesting of async sequences.

```cpp
void updateMainSequence()
{
    asyncBegin(main, {
        asyncRun(main, {
            Serial.println("Step 0");
        });

        asyncDelay(main, 1000);

        asyncRun(main, {
            Serial.println("Step 1");
        });

        asyncDelay(main, 1000);

        asyncVariable(main, float, timesRan, 0);

        asyncWhile(main, timesRan < 10, {
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
    });
}

void loop()
{
    updateMainSequence();

    digitalWrite(LED_PIN, digitalRead(BUTTON_PIN));
}
```

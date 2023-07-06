# Async Macros

A zero cost abstraction for asynchronous arduino code without using threads or complex switch statements.

Check out the [API docs](api.md) for a more detailed breakdown of the different functions.

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

```cpp
void updateMainSequence()
{
    asyncBegin({
        asyncRun({
            Serial.println("Step 0");
        });

        asyncDelay(1000);

        asyncRun({
            Serial.println("Step 1");
        });

        asyncDelay(1000);

        asyncVariable(float, timesRan, 0);

        asyncWhile(timesRan < 10, {
            asyncRun({
                timesRan += 0.5;
                Serial.print("Times ran: ");
                Serial.println(timesRan);
            });
            asyncDelay(500);
        });

        asyncFor(int, i, 0, i <= 5, i++, {
            asyncRun({
                Serial.println(i);
            });
            asyncDelay(1000);
        });

        asyncWhile(!digitalRead(BUTTON_PIN), {
            asyncRun({
                // This sub-sequence will run only
                // when this while loop is active.
                asyncBegin({
                    asyncRun({
                        Serial.println("Waiting for button press");
                    });
                    asyncDelay(1000);
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

[<- Back](/README.md)

# API

## `asyncBegin`

Creates an async context to keep track of what code should run

Can contain:

- `asyncRun`
- `asyncDelay`
- `asyncVariable`
- `asyncWhile`
- `asyncFor`
- `asyncWhileDuration`
- `asyncIf`
- `asyncIfElse`

### Example

```cpp
asyncBegin({
    asyncRun({
        Serial.println("Hello World");
    });
    asyncDelay(1000);
});
```

## `asyncRun`

Runs regular code

Can contain:

- `asyncBegin` (when inside an `asyncWhile` that contains no `asyncDelay`s)
- `asyncContinue`
- `asyncBreak`
- regular code

### Example

```cpp
asyncBegin({
    asyncRun({
        Serial.println("Hello World");
    });
    asyncWhile(!digitalRead(BUTTON_PIN), {
        asyncRun({
            // Start a second sequence that runs inside this step
            asyncBegin({
                asyncRun({
                    Serial.println("Hello World");
                });
                asyncDelay(1000);
            });
        });
    });
});
```

## `asyncDelay`

Delays the sequence for a given amount of time

### Example

```cpp
asyncBegin({
    asyncRun({
        Serial.println("Hello World");
    });
    asyncDelay(1000);
});
```

## `asyncVariable`

Creates a variable that behaves like a regular local variable throughout a run of the sequence.

#### Example

```cpp
asyncBegin({
    // Starts off with the default value 0,
    // keeps the changes until the end of the sequence
    // and then resets to 0 when the sequence restarts and gets back
    // to this step.
    asyncVariable(int, myInt, 0);
    asyncRun({
        myInt++;
        Serial.println(myInt);
    });
    asyncRun({
        myInt++;
        Serial.println(myInt);
    });
    asyncDelay(1000);
});
```

## `asyncWhile`

A regular while-loop

Condition can be:

- regular code

Can contain:

- `asyncRun`
- `asyncDelay`
- `asyncVariable`
- `asyncWhile`
- `asyncFor`
- `asyncWhileDuration`
- `asyncIf`
- `asyncIfElse`

### Example: Blocking wait

```cpp
asyncBegin({
    asyncRun({
        Serial.println("Hello World");
    });
    // Checks the state of the button every second
    asyncWhile(!digitalRead(BUTTON_PIN), {
        asyncRun({
            Serial.println("Waiting for button press");
        });
        asyncDelay(1000);
    });
});
```

### Example: Non-blocking wait

```cpp
asyncBegin({
    asyncRun({
        Serial.println("Hello World");
    });
    // Checks the state of the button constantly
    asyncWhile(!digitalRead(BUTTON_PIN), {
        asyncRun({
            // Sub-sequence that prints every second without
            // blocking the while loop from checking the button
            asyncBegin({
                asyncRun({
                    Serial.println("Waiting for button press");
                });
                asyncDelay(1000);
            });
        });
    });
});
```

## `asyncFor`

A regular for-loop

NB! Note that the syntax is slightly different than a regular for-loop.

Condition can be:

- regular code

Increment can be:

- regular code

Can contain:

- `asyncRun`
- `asyncDelay`
- `asyncVariable`
- `asyncWhile`
- `asyncFor`
- `asyncWhileDuration`
- `asyncIf`
- `asyncIfElse`

### Example

```cpp
asyncBegin({
    asyncRun({
        Serial.println("Hello World");
    });
    // Prints the numbers from 0 to 5 with
    // a 1 second delay between each
    asyncFor(int, i, 0, i <= 5, i++, {
        asyncRun({
            Serial.println(i);
        });
        asyncDelay(1000);
    });
});
```

## `asyncWhileDuration`

A while loop that runs for a given duration.

The contents of the loop will always run to the end,
meaning if the duration is 1.5 sec and there is a 1 sec
delay in the loop, the loop will run for 2 sec since it
would end up running 2x1 sec delays.

Can contain:

- `asyncRun`
- `asyncDelay`
- `asyncVariable`
- `asyncWhile`
- `asyncFor`
- `asyncWhileDuration`
- `asyncIf`
- `asyncIfElse`

Condition can be:

- regular code

### Example

```cpp
asyncBegin({
    asyncRun({
        Serial.println("Hello World");
    });
    // Prints "Hello World" every every second.
    // The loop will continue restarting for 1.5 seconds,
    // meaning it will print 2 times, and take 2 seconds
    // to complete.
    asyncWhileDuration(1500, {
        asyncRun({
            Serial.println("Hello World");
        });
        asyncDelay(1000);
    });
    asyncRun({
        Serial.println("Done 2 seconds later");
    });
});
```

## `asyncBreak`

A regular break; statement
Can only be used inside `asyncRun({ })`

NB! This will skip the **next** step in the sequence, it will not skip the remaining code inside the current asyncRun({ }).

### Example:

```cpp
asyncBegin({
    asyncWhile(true, {
        asyncRun({
            if (digitalRead(BUTTON_PIN)) {
                asyncBreak();
            }
        });
        // The next steps get skipped and
        // the while loop ends when the button is pressed
        asyncRun({
            Serial.println("Waiting for button press");
        });
        asyncDelay(1000);
    });
});
```

## `asyncContinue`

A regular continue; statement
Can only be used inside `asyncRun({ })`

NB! This will skip the **next** step in the sequence, it will not skip the remaining code inside the current asyncRun({ }).

### Example:

```cpp
asyncBegin({
    asyncRun({
        Serial.println("Hello World");
    });
    // Prints every other number from 0 to 10 with
    // a 1 second delay between each
    asyncFor(int, i, 0, i <= 10, i++, {
        asyncRun({
            if (i % 2 == 0)
            {
                asyncContinue();
            }
        });
        // The next steps get skipped when i is odd
        asyncRun({
            Serial.println(i);
        });
        asyncDelay(1000);
    });
});
```

## `asyncIf`

A regular if-statement

Condition can be:

- regular code

Can contain:

- `asyncRun`
- `asyncDelay`
- `asyncVariable`
- `asyncWhile`
- `asyncFor`
- `asyncWhileDuration`
- `asyncIf`
- `asyncIfElse`

### Example

```cpp
asyncBegin({
    asyncRun({
        Serial.println("Hello World");
    });
    asyncIf(digitalRead(BUTTON_PIN), {
        asyncRun({
            Serial.println("Button is pressed");
        });
    });
    asyncDelay(1000);
});
```

## `asyncIfElse`

A regular if-else-statement

Condition can be:

- regular code

Can contain:

- `asyncRun`
- `asyncDelay`
- `asyncVariable`
- `asyncWhile`
- `asyncFor`
- `asyncWhileDuration`
- `asyncIf`
- `asyncIfElse`

### Example

```cpp
asyncBegin({
    asyncRun({
        Serial.println("Hello World");
    });
    asyncIfElse(digitalRead(BUTTON_PIN), {
        asyncRun({
            Serial.println("Button is pressed");
        });
    }, {
        asyncRun({
            Serial.println("Button is not pressed");
        });
    });
    asyncDelay(1000);
});
```

# Led Control Library

ESP32 Led control library with some usefull and easy shortcuts to make the main code clean.

## Install

1. Download the code
2. Add the folder under `Arduino/libraries`
3. Restart Arduino IDE

## Library details

Public functions:

- `Led(int pin)`
    
    Contructor, inform the `pin` number to initiate the output

- `void on()`

    Set the Pin as `HIGH`

- `void off()`

    Set the Pin as `LOW`

- `bool status()`

    Retun the status of the Pin

- `void blink(int blinkPeriod)`

    Blink the Led/Pin in `blinkPeriod` miliseconds

## Example

```c++
#include <Led.h>

Led led_built_in(LED_BUILTIN);

void setup() {
  led_built_in.begin();
}

void loop() {
  //led_built_in.on();
  //led_built_in.off();
  led_built_in.blink(200); 
}
```

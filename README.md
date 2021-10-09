# Led Control Library

ESP32 Led control library with some usefull and easy shortcuts to make the main code clean.

## Install

1. Download the code
2. Add the folder under `Arduino/libraries`
3. Restart Arduino IDE

## Library details

Public functions:

- `Led(int pin)`
    
    Contructor, inform the Pin number to initiate the output

- `void begin()`

    Initiate the output pin

- `void on()`

    Set the Pin as `HIGH`

- `void off()`

    Set the Pin as `LOW`

- `bool status()`

    Retun the status of the Pin

- `void blink(int blinkPeriod)`

    Blink the Led/Pin in `blinkPeriod` miliseconds

## Example



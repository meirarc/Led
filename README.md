# ⚙ Led Control Library

ESP32 Led control library with some useful and easy shortcuts to make the main code clean instead of create the whole code for a Led controling.

## ⚡ Install

1. Download the code
2. Add the folder under `Arduino/libraries`
3. Restart Arduino IDE

## 🔧 Library details

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

## 🖌 Example

```c++
#include <Led.h>

Led led_built_in(LED_BUILTIN);

void setup() {
  
}

void loop() {
  //led_built_in.on();
  //led_built_in.off();
  led_built_in.blink(200); 
}
```

## 🙋‍♂️ Support & Contributing

Contributions are welcome! Feel free to open an issue or submit a pull request if you have a way to improve this project.

Make sure your request is meaningful and you have tested the app locally before submitting a pull request.

💙 If you like this project, give it a ⭐ and share it with friends!

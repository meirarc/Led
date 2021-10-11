/**
 * @file Led.ino
 * @author meirarc
 * @brief Example of Led library use
 * @version 0.1
 * @date 2021-10-11
 * 
 * @copyright Copyright (c) 2021
 */

#include <Led.h>

Led led_built_in(LED_BUILTIN);

void setup() {
  
}

void loop() {
  //led_built_in.on();
  //led_built_in.off();
  led_built_in.blink(200); 
}

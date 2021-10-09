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

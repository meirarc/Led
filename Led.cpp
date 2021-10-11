/**
 * @file Led.cpp
 * @author meirarc
 * @brief Led control methods
 * @version 0.1
 * @date 2021-10-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <Led.h>

/**
 * @brief Construct a new Led:: Led object
 * 
 * @param pin 
 */
Led::Led(int pin)
{
  _pin = pin;
  pinMode(_pin, OUTPUT);
}

/**
 * @brief on() method. Set pin as HIGH
 * 
 */
void Led::on()
{
  digitalWrite(_pin, HIGH);
  _status = true;
}

/**
 * @brief off() method. Set pin as LOW
 * 
 */
void Led::off()
{
  digitalWrite(_pin, LOW);
  _status = false;
}
/**
 * @brief status() method. Return true for pin as HIGH and false for the pin LOW
 * 
 * @return true 
 * @return false 
 */

bool Led::status()
{
  return _status;
}

/**
 * @brief blink(blinkPeriod). blink the led based on the blinkPeriod in milliseconds.
 * 
 * @param blinkPeriod 
 */
void Led::blink(int blinkPeriod)
{
  static long lastMillis = 0;
  long currentMillis = millis();
  long elapsed = currentMillis - lastMillis;
  if (elapsed > blinkPeriod) 
  {
      if(_status)
          off();
      else
          on();
      lastMillis = currentMillis;
  }
}

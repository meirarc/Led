/**
 * @file Led.h
 * @author meirarc
 * @brief Led control library
 * @version 0.1
 * @date 2021-10-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef Led_h
#define Led_h

#include <Arduino.h>


class Led
{
   public:
    Led(int pin);
    void on();
    void off();
    bool status();
    void blink(int blinkPeriod);
    
   private:
    int _pin;
    bool _status;
};

#endif

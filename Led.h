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

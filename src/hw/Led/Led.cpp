#include "Led.h"
#include "wiringPi.h"

Led::Led(int pin, int cnt)
    : pinNumber(pin), ledState(OFF)
{
    wiringPiSetup();
    for(int i = 0; i <= cnt; i++)
        pinMode(pinNumber+i, OUTPUT);
    InitLed(cnt);
}

Led::~Led()
{
}

void Led::InitLed(int cnt)
{
    for(int i = 0; i <= cnt; i++)
        writePin(i, OFF);
}

void Led::writePin(int pinCnt, bool pinState)
{
    digitalWrite(pinNumber+pinCnt, (int)pinState);
}

void Led::On(int pinCnt)
{
    ledState = ON;
    writePin(pinCnt, ledState);
}

void Led::Off(int pinCnt)
{
    ledState = OFF;
    writePin(pinCnt, ledState);
}
void Led::Toggle(int pinCnt)
{
    ledState ^= 1;
    writePin(pinCnt, ledState);
}

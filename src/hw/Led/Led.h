#ifndef __LED_H__
#define __LED_H__

class Led
{
private:
    const bool ON = 1;
    const bool OFF = 0;
    int pinNumber;
    bool ledState;

    void writePin(int pinCnt, bool pinState);

public:
    Led(int pin, int cnt);
    virtual ~Led();
    void InitLed(int cnt);
    void On(int pinCnt);
    void Off(int pinCnt);
    void Toggle(int pinCnt);
};

#endif /* __LED_H__ */
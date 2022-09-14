#ifndef VIEW_H
#define VIEW_H

#pragma once
#include <string>
#include "Led.h"
#include <wiringPi.h>

enum
{
    LIGHT_OFF,
    LIGHT_ON_1,
    LIGHT_ON_2,
    LIGHT_ON_3,
    LIGHT_ON_4,
    LIGHT_ON_5
};

class View
{

private:
    int lightState;
    Led *light;

public:
    View(Led *led);
    virtual ~View();
    void UpdateState(std::string strState);
    void LightView();
    // void LightOn();
    void LightOn(int cnt);
    void LightOff(int cnt);
};

#endif
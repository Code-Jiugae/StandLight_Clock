#include "View.h"
#include <iostream>

View::View(Led *led)
{
    light = led;
    lightState = LIGHT_OFF;
}

View::~View()
{
}

void View::UpdateState(std::string strState)
{
    switch (lightState)
    {
    case LIGHT_OFF:
        if (strState == "StateOn1")
        {
            lightState = LIGHT_ON_1;
        }
        break;

    case LIGHT_ON_1:
        if (strState == "StateOn2")
        {
            lightState = LIGHT_ON_2;
        }
        break;

    case LIGHT_ON_2:
        if (strState == "StateOn3")
        {
            lightState = LIGHT_ON_3;
        }
        break;

    case LIGHT_ON_3:
        if (strState == "StateOn4")
        {
            lightState = LIGHT_ON_4;
        }
        break;
    case LIGHT_ON_4:
        if (strState == "StateOn5")
        {
            lightState = LIGHT_ON_5;
        }
        break;
    case LIGHT_ON_5:
        if (strState == "StateOff")
        {
            lightState = LIGHT_OFF;
        }
        break;

    default:
        break;
    }
}

void View::LightView()
{
    switch (lightState)
    {
    case LIGHT_OFF:
        LightOff(0);
        LightOff(1);
        LightOff(2);
        LightOff(3);
        LightOff(4);
        break;

    case LIGHT_ON_1:
        LightOn(0);
        break;
    case LIGHT_ON_2:
        LightOn(1);
        break;
    case LIGHT_ON_3:
        LightOn(2);
        break;
    case LIGHT_ON_4:
        LightOn(3);
        break;
    case LIGHT_ON_5:
        LightOn(4);
        break;

    default:
        break;
    }
}

// void View::LightOn()
// {
//     light->On();
// }

// void View::LightOn()
// {
//     static unsigned int prevTime = 0;
//     if (millis() - prevTime < 300)
//         return;
//     prevTime = millis();
//     light->Toggle();
// }

void View::LightOn(int cnt)
{
    light->On(cnt);
}

void View::LightOff(int cnt)
{
    light->Off(cnt);
}
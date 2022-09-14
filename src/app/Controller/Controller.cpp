#include "Controller.h"

Controller::Controller(View *viewer)
{
    view = viewer;          //이름을 light로 하겠다.
    lightState = LIGHT_OFF; //초기화
}

Controller::~Controller()
{
}

void Controller::updateEvent(std::string strBtn)
{
    switch (lightState)
    {
    case LIGHT_OFF:
        if (strBtn == "1")
        {
            lightState = LIGHT_ON_1;
            view->UpdateState("StateOn1");
        }
        break;
    case LIGHT_ON_1:
        if (strBtn == "2")
        {
            lightState = LIGHT_ON_2;
            view->UpdateState("StateOn2");
        }
        break;

    case LIGHT_ON_2:
        if (strBtn == "3")
        {
            lightState = LIGHT_ON_3;
            view->UpdateState("StateOn3");
        }
        break;

    case LIGHT_ON_3:
        if (strBtn == "4")
        {
            lightState = LIGHT_ON_4;
            view->UpdateState("StateOn4");
        }
        break;

    case LIGHT_ON_4:
        if (strBtn == "5")
        {
            lightState = LIGHT_ON_5;
            view->UpdateState("StateOn5");
        }
        break;

    case LIGHT_ON_5:
        if (strBtn == "0")
        {
            lightState = LIGHT_OFF;
            view->UpdateState("StateOff");
        }
        break;

    default:
        break;
    }
}
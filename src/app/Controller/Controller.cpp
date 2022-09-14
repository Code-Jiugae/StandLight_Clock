#include "Controller.h"

Controller::Controller(Service *serv)
{
    service = serv;
    lightState = LIGHT_OFF;
}

Controller::~Controller()
{
}

void Controller::updateEvent(std::string strBtn)
{
   
    if (strBtn == "powerButton")
    {
        service->updateState("modeButton");
    }
}
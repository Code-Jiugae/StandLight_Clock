#include "Listener.h"
#include <iostream>
Listener::Listener(Button *button, Controller *control)
{
    powerButton = button;
    controller = control;
}
Listener::~Listener()
{

}

void Listener::CheckEvent()
{
    if(powerButton->getState() == RELEASE_ACTIVE)
    {
        cnt++;
        if(cnt > 5) cnt = 0;
            std::cout << cnt << std::endl;
        // controller->updateEvent("powerButton");
        controller->updateEvent(std::to_string(cnt));
    }
}


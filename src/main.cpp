#include <iostream>
#include <wiringPi.h>
#include "Button.h"
#include "Led.h"
#include "Listener.h"
#include "Controller.h"
#include "View.h"
#include <time.h>

int main()
{
    std::cout << "Hello World!" << std::endl;
    time_t timeSec;
    struct tm *timeData;

    // while (1)
    // {
    //     timeSec = time(NULL);
    //     timeData = localtime(&timeSec);
    //     std::cout << "timeSec : " << timeSec << std::endl;
    //     std::cout << timeData->tm_hour << " : "
    //               << timeData->tm_min << " : "
    //               << timeData->tm_sec << std::endl;
    //     delay(100);
    // }
    
    Button button1(27);
    Led led1(21);
    Led led2(22);
    Led led3(23);
    Led led4(24);
    Led led5(25);
    View view(&led1, &led2, &led3, &led4, &led5);
    Service service(&view);
    Controller control(&service);
    Listener listener(&button1, &control);

    while (1)
    {
        listener.checkEvent();
        view.lightView();
        delay(50);
    }

    return 0;
}
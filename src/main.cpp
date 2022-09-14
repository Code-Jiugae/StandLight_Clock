#include <iostream>
#include "Led.h"
#include "Listener.h"
#include "View.h"
#include <wiringPi.h>

using namespace std;

int main()
{
    cout << "hello world" << endl;
    Button button1(27);
    Led led1(21, 4);
    //led1.Off(1);
    // Led led1(25);
    // Led led2(24);
    // Led led3(23);
    // Led led4(22);
    // Led led5(21);

    View view(&led1);
    Controller control(&view);
    Listener listener(&button1, &control);

    while (1)
    {
        
        // led1.On(0);
        // led1.On(1);
        // led1.On(2);
        // led1.On(3);
        // led1.On(4);
        listener.CheckEvent();
        view.LightView();
        delay(50);
    }
    
    return 0;
}
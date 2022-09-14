#ifndef LISTENER_H
#define LISTENER_H

#pragma once

#include "Button.h"
#include "Controller.h"

class Listener
{
private:
    Button *powerButton;
    Controller *controller;
    int cnt = 0;
public:
    Listener(Button *button, Controller *control);
    ~Listener();
    void CheckEvent();

};

#endif
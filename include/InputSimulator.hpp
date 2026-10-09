#pragma once
#include <windows.h>

class InputSimulator
{
    INPUT inputs[2] = {};
    int ENTER;
    public:
    void SimulateEnterPress();
    InputSimulator();
};
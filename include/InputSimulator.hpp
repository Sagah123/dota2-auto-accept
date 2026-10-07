#pragma once
#include <windows.h>

class InputSimulator
{
    INPUT inputs[2] = {};
    public:
    void SimulateEnterPress();

};
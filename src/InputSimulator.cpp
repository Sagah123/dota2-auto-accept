#include "InputSimulator.hpp"
#define sizeInput (sizeof(inputs[0]))

InputSimulator::InputSimulator(){
    ENTER = MapVirtualKey(VK_RETURN, 0);
    inputs[0].type = INPUT_KEYBOARD;
    inputs[0].ki.wScan = ENTER;
    inputs[0].ki.dwFlags = 0;
    inputs[0].ki.dwFlags = KEYEVENTF_SCANCODE;
    inputs[1].type = INPUT_KEYBOARD;
    
}
void InputSimulator::SimulateEnterPress()
{
    inputs[1].ki.wScan = ENTER;
    inputs[1].ki.dwFlags = KEYEVENTF_KEYUP | KEYEVENTF_SCANCODE;
    SendInput(1, &inputs[0], sizeInput);
    Sleep(67);
    SendInput(1, &inputs[1], sizeInput);
}
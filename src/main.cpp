#include <iostream>
#include "ProcessChecker.hpp"
#include "InputSimulator.hpp"

int main(){
    ProcessChecker s;
    InputSimulator z;
    while(true){
    Sleep(1000);
    if (s.isDotaRunning()){
        z.SimulateEnterPress();
    }
    }
}
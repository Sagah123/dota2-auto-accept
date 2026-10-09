#pragma once
#include <windows.h>

class ProcessChecker
{
    struct HandleDeleter{
        void operator()(HANDLE handle){
            if(handle != INVALID_HANDLE_VALUE && handle != nullptr){
                CloseHandle(handle);
            }
        }
    }; // I really didnt want to create that struct
    public:
    bool isDotaRunning();
};
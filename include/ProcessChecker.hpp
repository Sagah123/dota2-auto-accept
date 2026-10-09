#pragma once
#include <windows.h>

class ProcessChecker
{
    struct HandleDeleter{
        void operator()(HANDLE handle){
            if(!INVALID_HANDLE_VALUE && !nullptr){
                CloseHandle(handle);
            }
        }
    }; // I really didnt want to create that struct
    public:
    bool isDotaRunning();
};
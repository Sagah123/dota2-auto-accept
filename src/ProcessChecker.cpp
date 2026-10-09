#include "ProcessChecker.hpp"
#include <TlHelp32.h>
#include <memory>
#include <string>
bool ProcessChecker::isDotaRunning(){
    bool running = false;
    HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (snapshot == INVALID_HANDLE_VALUE){ return false;} //am i an idiot?
    std::unique_ptr<void, HandleDeleter> pHandle(snapshot);
    PROCESSENTRY32W storage;
    storage.dwSize = sizeof(storage); //is it microslop's mistake
    for(;Process32NextW(snapshot, &storage);){
        if(_wcsicmp(storage.szExeFile, L"dota2.exe") == 0){
            return true;
        }
    }
    return false;
}
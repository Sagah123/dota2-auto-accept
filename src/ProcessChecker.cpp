#include "ProcessChecker.hpp"
#include <TlHelp32.h>
#include <memory>
bool ProcessChecker::isDotaRunning(){
    bool running = false;
    HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (snapshot == INVALID_HANDLE_VALUE){ return false;} //am i an idiot?
    std::unique_ptr<HANDLE, HandleDeleter> pHandle = snapshot;
}
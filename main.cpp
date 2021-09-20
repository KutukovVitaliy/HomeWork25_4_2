#include <iostream>
#include "ram.h"
#include "gpu.h"
#include "kbd.h"
#include "cpu.h"
#include "disk.h"

extern ram buffer;

int main() {
    std::string command;

    InitRam();
    do{
        std::cout << "Enter the command: ";
        std::cin >> command;
        if(command == "save") Save();
        else if(command == "load") Load();
        else if(command == "input") GetBuffer();
        else if (command == "display") DisplayBuf();
        else if(command == "sum") Compute();
        else std::cout << "Wrong command! Try again!" << std::endl;

    }while(command != "exit");
    return 0;
}

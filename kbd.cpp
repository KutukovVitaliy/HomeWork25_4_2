//
// Created by kvitadmin on 20.09.2021.
//

#include "kbd.h"
#include "ram.h"
#include <iostream>

extern ram buffer;

void GetBuffer(void){
    std::cout << "Fill the ram buffer!" << std::endl;
    for(int i = 0; i < 8; ++i){
        std::cout << "Enter the number #" << i+1 << ": ";
        std::cin >> buffer.mas.at(i);
    }
    std::cout << "Ram buffer is full!" << std::endl;
}
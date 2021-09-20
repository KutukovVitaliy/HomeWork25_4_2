//
// Created by kvitadmin on 20.09.2021.
//

#include "gpu.h"
#include "ram.h"
#include <array>

extern ram buffer;

void DisplayBuf(void){
    if(!buffer.mas.empty()){
        std::array<int,8> tmpBuf = buffer.Read();
        for(auto el : tmpBuf) std::cout << el << " " ;
        std::cout << std::endl;
    }
    else{
        std::cout << "Buffer is empty!" << std::endl;
    }
}
//
// Created by kvitadmin on 20.09.2021.
//

#include "cpu.h"
#include "ram.h"
#include <iostream>

extern ram buffer;

void Compute(void ){
    if(!buffer.mas.empty()){
        int sum = 0;
        for(auto el : buffer.mas) sum += el;
        std::cout << "The sum of the buffer elements is: " << sum << std::endl;
    }
    else{
        std::cout << "Buffer is empty!" << std::endl;
    }
}
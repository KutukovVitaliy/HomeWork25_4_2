//
// Created by kvitadmin on 20.09.2021.
//

#include "disk.h"
#include "ram.h"
#include <fstream>
#include <iostream>
extern ram buffer;

void Save(void){
    if(!buffer.mas.empty()){
        std::ofstream file("../data.txt");
        if(!file) std::cout << "Can't open file data.txt" << std::endl;
        else{
            for(auto el : buffer.mas) file << el << " ";
            file.close();
            std::cout <<"Buffer is dumped!" << std::endl;
        }
    }
    else{
        std::cout << "Buffer is empty!" << std::endl;
    }
}
void Load(void){
    std::ifstream file("../data.txt");
    if(!file) std::cout << "Can't open file data.txt" << std::endl;
    else{
        for(auto &el : buffer.mas) file >> el ;
        file.close();
        std::cout <<"Buffer is loaded!" << std::endl;
    }
}
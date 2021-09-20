//
// Created by kvitadmin on 20.09.2021.
//

#ifndef HOMEWORK25_4_2_RAM_H
#define HOMEWORK25_4_2_RAM_H
#include <array>

struct ram{
    std::array<int, 8> mas;
    std::array<int, 8> (*Read)(void);
    void (*Write)(std::array<int, 8>&);
};

std::array<int, 8> ReadBuf();
void WriteBuf(std::array<int, 8>& masSource);
void InitRam(void);
#endif //HOMEWORK25_4_2_RAM_H

//
// Created by kvitadmin on 20.09.2021.
//

#include "ram.h"

ram buffer;


std::array<int, 8> ReadBuf(){
    return buffer.mas;
}

void WriteBuf(std::array<int, 8>& masSource){
    buffer.mas = masSource;
}
void InitRam(void){
    buffer.Read = ReadBuf;
    buffer.Write = WriteBuf;
}
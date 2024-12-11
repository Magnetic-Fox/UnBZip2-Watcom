// That's a very, very simple test code...
// by Magnetic-Fox, 16th March 2024

#include <iostream>
#include "unbzip2.h"

// Include test data (rawData, rawData2, rawData3, rawData4)
#include "testdata.hpp"

unsigned char buffer[65535];

void test(unsigned char *data, unsigned int size) {
    unsigned int outSize, temp;
    for(temp=0; temp<size; ++temp) {
        buffer[temp]=data[temp];
    }
    outSize=uncompressDataInPlace(buffer,size,65535);
    for(unsigned int x=0; x<outSize; ++x) {
        std::cout << buffer[x];
    }
    std::cout << std::endl;
    return;
}

int main(void) {
    test(rawData,79);
    std::cout << std::endl << "--------------------------------------------------" << std::endl << std::endl;
    test(rawData2,5818);
    std::cout << std::endl << "--------------------------------------------------" << std::endl << std::endl;
    test(rawData3,12870);
    std::cout << std::endl << "--------------------------------------------------" << std::endl << std::endl;
    test(rawData4,12537);
    return 0;
}

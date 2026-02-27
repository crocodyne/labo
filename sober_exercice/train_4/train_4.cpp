#include <fmt/core.h>
#include <bitset>
#include <vector>
#include <map>
#include <thread>
#include <iostream>
#include <sstream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

//___?___ //tell to the compiler not add padding
#pragma pack(1)
typedef struct {
    uint8_t hours;
    uint32_t micros;
    uint16_t seconds;
} timestuff_t;


int main() {
        timestuff_t t = {.hours = 6, .micros = 0x12345678, .seconds = 0xDEAD};
        printf("%lu",sizeof(t));

    return 0;
}
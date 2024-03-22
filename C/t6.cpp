#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {

    // sizeof 

    // int aizere = 20000000;

    // printf("%d", sizeof(aizere)); // 4 байт
    // 1 байт = 8 bit  
    // 4 байт = 32 бит 

    // P = 3.14 
    // k = 9 * 10 ** 9 
    // const double pi = 3.14;
    // pi = 12;
    // printf("%f", pi);
    int aizere = 5;
    const int *pointer = &aizere;
    int roma = 12;
    // нельзя 
    // *pointer = 12;
    // можно
    pointer = &roma;
    printf("%d", *pointer);
    return 0;
}
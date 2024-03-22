#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {

    // как создать 
    // int aizere = 5;
    // int *pointer = &aizere;
    // printf("%d \n", &aizere);

    // pointer ----> aizere
    // & мы получаем адрес у переменной 

    // int value = *pointer;
    // memory -> value => * 

    // printf("%d", *&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&value);

    // int aizere = 5;
    // int *pointer = &aizere;

    // [apple][apple][][][][][][][][aizere][][][][][][][][][][][][][][][][]
    //                             // 1
    //                                 // /   /   /
    // [applepointer][applepointer][][][][][pointer][][][][][][][][][][][][][][][][][][][]
    //                                      aizere
        // [][][]
    // aizere = 1;

    // printf("%d", *pointer); // 1

    // int aizere = 5;
    // int *pointer = &aizere;

    // *pointer = 17;

    // printf("%d", aizere);

    // pointer === massive 

    int massive[3] = {1, 2, 3};
    // int *pointer = massive;
    // printf("%d \n", pointer);
    // printf("%d", massive);
    // printf("%d \n", *(pointer + 0));
    // int *pointer = &massive[1];
    int *pointer = (massive + 1);
    // *pointer = 100;

    printf("%d", massive[1]); // 100 
    // massive[x] = *(massive + x)
    // (massive + x) -> это адрес в позиции x 
    return 0;
}
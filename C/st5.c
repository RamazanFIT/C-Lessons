#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

struct Aizere
{
    unsigned int isGirl : 1 ; // 0 1  
    int age : 2 ; // 01 10 11 00 
    int blabla : 12 ; //
};



int main() {

    struct Aizere aizere;

    aizere.isGirl = 1;

    printf("%d", aizere.isGirl);


    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {

    // int aizere = 5;

    // int *pointer1 = &aizere; 
    
    // int **pointer2 = &pointer1;
    // **pointer2 = 12;

    // int value1 = **pointer2; 
    // int value2 = *pointer1; 
    // int value3 = aizere; 

    // printf("From Pointer2:%d \n", value1); 
    // printf("From Pointer1:%d \n", value2); 
    // printf("From Aizere:%d \n", value3); 


    int aizere = 5;

    int *pointer1 = &aizere; 
    
    int **pointer2 = &pointer1;

    int ***pointer3 = &pointer2;

    **pointer2 = 12;

    int value0 = ***pointer3;
    int value1 = **pointer2; 
    int value2 = *pointer1; 
    int value3 = aizere; 

    printf("From Poin3:%d \n", value0); 
    printf("From Pointer2:%d \n", value1); 
    printf("From Pointer1:%d \n", value2); 
    printf("From Aizere:%d \n", value3); 
    

    return 0;
}
#include <stdio.h>

int main() {

    
    // получить массив из консоли 
    // потом просто вычислить сумму и записать в переменную 
    int sizeOfMassive;
    printf("Enter the size of the array(massive): ");
    // Receiving massive from console 
    scanf("%d", &sizeOfMassive);
    int massive[sizeOfMassive];
    // int* massive;
    // massive -> pointer  
    // massive[0] = *(massive + 0);
    // massive[10] = *(massive + 10);

    for(int i = 0; i < sizeOfMassive; i++){
        scanf("%d", &massive[i]);
    }

    int * somePointer = massive;
            // addr1        add2 
            // addr1 == add2
            // roma 
            // ramazan 

    int sumOfMassive = 0;
    
    for(int i = 0; i < sizeOfMassive; i++){
        // sumOfMassive += massive[i];
        // sumOfMassive = sumOfMassive + somePointer[i];
        sumOfMassive = sumOfMassive + *(somePointer + i);
        // *( + )
        // *(p + i) --> p[i] 
    }

    printf("The sum of massive: %d", sumOfMassive);

    return 0;
}
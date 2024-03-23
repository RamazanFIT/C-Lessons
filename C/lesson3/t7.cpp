#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void buble_sort(int massive[], int n){
    // 5, 4, 3, 1, 2 
    // 4, 5, 3, 1, 2 
    // 4, 3, 5, 1, 2 
    // 4, 3, 1, 2, 5
        // 1 2 32  44
    // n - 1

    // 4, 3, 1, 2, 5
    // 3 4 ....

    for(int i = 0; i < n; i++){
        for(int j = 1; j < n; j++){
            if(massive[j] < massive[j - 1]){
                // swap a b
                int tmp = massive[j];
                massive[j] = massive[j - 1];
                massive[j - 1] = tmp;
            }
        }
    }
    
}

int main() {

    // sort 

    int massive[] = {5, 4, 3, 1, 2};

    // buble sort 

    buble_sort(massive, 5);

    for(int i = 0; i < 5; i++){
        printf("%d ", massive[i]);
    }


    return 0;
}
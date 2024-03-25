#include <stdio.h>

int* getMax(int a, int b){

    if(a > b){
        return &a;
    } else {
        return &b;
    }

}

int main() {

    // pointer massive for while if 

    // printf 

    // scanf
    
    // a b 
    // max 
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    int* maxVal = getMax(a, b);

    printf("%d", *maxVal);
    

    return 0;
}
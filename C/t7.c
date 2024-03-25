#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    freopen("example.txt", "r", stdin);
    // freopen("exampleoutput.txt", "w", stdout);

    // stdin 
    // stdout 


    // printf("Aizere");
    int a;
    // scanf("%d", &a);
    // printf("%d", a);
    while(scanf("%d", &a) != EOF){
        printf("%d \n", a / 2);
    }

    
    return 0;
}
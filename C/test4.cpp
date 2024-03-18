#include <stdio.h>

int main() {

    // reverse order 

    // 1 2 3 4 5 
    // reverse order 
    // 5 4 3 2 1
    
    int n;
    scanf("%d", &n);

    int massive[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &massive[i]);
    }

    int * first = massive;
    int * last = massive + n - 1;
    int half = n / 2;
    for(int i = 0; i < half; i++){
        // int a, b, c;
        // a = *first;
        // b = *last;
        // c = a;
        // a = b;
        // b = c;
        // *first = a;
        // *last = b;
        // first++;
        // last--;
        int c = *first;
        *first = *last;
        *last = c;
        first++;
        last--;
    }
    for(int i = 0; i < n; i++){
        printf("%d ", massive[i]);
    }
    // a = 1
    // b = 2 

    // a = b ----
    // b = a

    // c = a 
    // a = b 
    // b = c 


    // 0 1 2 3 4 
    // 4 / 2 = 2
    // 0 1
    // 0 1 2 3 4 5
    // 6 / 2 = 3

    return 0;
}
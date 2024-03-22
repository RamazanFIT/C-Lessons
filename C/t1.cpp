#include <stdio.h>
#include <ctype.h>
#include <string.h>
int a_b(int a, int b){
    return a + b;
}

void print(int a){
    printf("%d", a);
}

void bublesort(int *w, int n){
    // for(int i = 0; i < n; i++){
    //     printf("%d ", w[i]);
    // }
    for(int i = 0; i < n - 1; i++){
        for(int j = 1; j < n; j++){
            if(w[j] < w[j - 1]){
                int tmp = w[j];
                w[j] = w[j - 1];
                w[j - 1] = tmp;
            }
        }
    }
}

int main() {

    int x = 10;
    const int *ptr = &x; // Указатель ptr указывает на константу

    printf("%d", *ptr);
    *ptr = 5;
    printf("%d", *ptr);
    printf("%d", a_b(1, 2));
    print(12);
    int n;
    scanf("%d", &n);
    int w[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &w[i]);
    }
    bublesort(w, n);
    for(int i = 0; i < n; i++){
        printf("%d ", w[i]);
    }
    int w[5] = {1, 2, 3, 4, 5};
    int x = 10;
    // printf("%d ", *(w + 3));
    int y = sizeof(x);
    printf("%d", y);
    
    char name[50];
    printf("Введите ваше имя: ");
    // scanf("%s", name);
    // name[5] = '1';

    printf("Привет, %s!\n", name);

    char str1[20] = "Hello";
    
    printf("%c", str1[19]);

    char str2[20] = "World!";
    str2[7] = 'f';
    // strcat(str1, str2);
    printf("Результат конкатенации: %s\n", str2);

    char a = 'h';
    printf("%c", a);

    int num = atoi(numStr);

    return 0;
}
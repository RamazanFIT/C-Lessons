#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


// struct Person {
//     char name[50];
//     int age;
//     float height;
// };

typedef struct {
    char name[50];
    int age;
    float height;
} Person;


// void print(Person p1){
//     printf("Имя: %s, Возраст: %d, Рост: %.2f\n", p1.name, p1.age, p1.height);
// }

union Data {
    int i;
    float f;
    char str[1];
};

int main() {

    // printf("Hello world!");
    // Person p1 = {"John", 25, 175.5};
    // print(p1);
    // union Data data;
    
    // Доступ к членам объединения
    // data.i = INT32_MAX;
    // printf("data.i: %d\n", data.i);
    
    // data.f = 3.14;
    // printf("data.f: %f\n", data.f);
    
    // strcpy(data.str, "Hello");
    // printf("data.str: %s\n", data.str);
    
    // // Обратите внимание, что при использовании объединения переменные делят одну и ту же память
    // printf("Размер объединения: %lu байт\n", sizeof(data));

        // data.i = 10;
        // printf("Размер data.i: %lu байт\n", sizeof(data.i));
        
        // data.f = 3.14;
        // printf("Размер data.f: %lu байт\n", sizeof(data.f));
        
        // printf("Размер data.str: %lu байт\n", sizeof(data.str));
    union Data data;
    
    data.i = 10;
    printf("data.i: %d\n", data.i); // Вывод: data.i: 10
    
    data.f = 3.14;
    printf("data.i после присвоения data.f: %d\n", data.i); // Значение data.i изменится
    printf("data.f: %f\n", data.f); // Вывод: data.f: 3.140000
    return 0;
}
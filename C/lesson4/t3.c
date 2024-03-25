#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

enum Color {RED, GREEN, BLUE};
enum Color2 {roma};

// struct {
//     unsigned int isRed : 1;
//     unsigned int isGreen : 1;
//     unsigned int isBlue : 1;
// } status;

struct status
{
    unsigned int age : 1;

   
};


int main() {


    // enum Color a = RED;

    // enum Color2 b = roma;

    struct status a;
    a.age = 1;
    printf("%d", a.age);
    




    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


enum countries{
  Kazakhstan,
  Japan,
  Turkey
};
// ананонимные структуры 
struct C{
    enum countries c;
    int age;

    struct {
        int age1;
        int jojo;
    };

};


int main() {
    struct C roma;
    roma.jojo = 1;

    printf("%d", roma.jojo);

    return 0;
}
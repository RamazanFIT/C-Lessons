#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// ENUMERATIONS 

// enum Model{
//     TOYOTA,
//     MERSEDES,
//     BMW 
// };

// struct A{
//     int age;
//     enum Model model; // string
// };

enum countries{
  Kazakhstan,
  Japan,
  Turkey
};

struct C{
  enum countries c;
  int age;
};



int main() {
	
  	// here 
  	struct C c = {Kazakhstan, 1000};

    c.c = Japan;

	if(c.c == Kazakhstan){
      printf("%d", c.age);
    }
  
  
    // struct A a;

    // enum Model name = TOYOTA;
    // name = BMW;
    // if(name == MERSEDES){
    //     printf("Aizere");
    // } else if(name == BMW){
    //     printf("ZHirik");
    // } else if(name == TOYOTA){
    //     printf("Roma");
    // }

    return 0;
}
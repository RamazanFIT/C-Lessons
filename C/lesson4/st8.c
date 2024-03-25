#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>



typedef struct{
    // city  : char[50]
    // raion : char[50]
    char city[50];
    char raion[50];
  
} Address;

typedef struct{
    name: char[50] 
    // surname : char[50] 
    char name[50];
      
    char surname[50];
} Person;

typedef struct{
    // name  : char[50]
    // owner : Person 
    // address : Address
    char name[50];
  	Person owner;
  	Address address;
}Shop;

int main() {
   // *Shop 
  	// int *a;
  	Shop *shop;
  	(shop->address).city;
   // city
	
    return 0;
}
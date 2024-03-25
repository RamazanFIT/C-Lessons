#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// struct Person{
//     int age;
//     char name[50];
//     float height;
// };

typedef struct {
    int age;
    char name[50];
    float height;
} Person;

    // Car 
    // engine  float 
    // marka string 
    // owner Person

struct Marka{
  char name[50];
  char model[50];
  char country[50];
    // write here 
};



// Toyota -> Land C camry 
// Mercedes -> cls 
struct Car{
    // task 
    float engine;
    // char marka[50];
  	// type here 
    
  	struct Marka marka;
  
    Person owner;
  
};


// Order:
// restaurant : Restaurant
// totalPrice : float
// typeOfFood : char[50]


// Restaurant:
// name : char[50]
// address : char[50] 
// city : char[50]

struct Restaurant{
	// type here 
    char name[50];
    char adsress[50];
    char city[50];
};
    
struct Order{
	// type here 
  struct Restaurant restaurant;
  float totalPrice;
  char city[50];

};
      
int main() {
  
  	// HERE 
  	
  	struct Restaurant rest = {"Dodo pizza", "Abylkhairhana 18", "Astana"};
  
    struct Order first= {rest, 50.670, "Astana"};
  	
//   	first.rest -> дает доступ к ресторану 
//     first.totalPrice -> к цене
// 	first.rest.adsress
// 	first.rest.city
// 	first.rest.name
      
    // int 
    // char 
    // bool 

    // Person ramazan = {100, "ramazan", 100};
//     Person aizere = {40, "aizere", 40};
  
//   	// write here 
  
//   	// 
  
//  	struct Marka my_marka = { "toyata", "camry",  "Azerbaijan"}; 
  
  
//     struct Car car = {4.6, my_marka, aizere};
  	
//   	printf("my marka: name: %s model: %s country:%s", car.marka.name, car.marka.model, car.marka.country);
    
  
    // printf("age : %d  name : %s  height: %f", ramazan.age, ramazan.name, ramazan.height);
    // printf("\n");
    // printf("age : %d  name : %s  height: %f", aizere.age, aizere.name, aizere.height);

    // Car 
    // engine  float 
    // marka string 
    // owner Person

    // struct Car some_car = {6, "toyota 570", aizere}; // 

    // printf("engine: %f  marka:%s nameOwner: %s", some_car.engine, some_car.marka, some_car.owner.name);
  	

      
    
  	
  
}



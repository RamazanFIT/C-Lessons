#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

bool isDigit(char a){
    // if(a == '1' or a == '2' or a == '3')

    // if(a between [0, 9]){
    //     return true;
    // } else{
    //     return false;
    // }


    if(a >= '0' and a <= '9'){
        return true;
    } else{
        return false;
    }

}

bool isUpper(char a){

    if(a >= 'A' and a <= 'Z'){
        return true;
    } else{
        return false;
    }

}

bool isLower(char a){

    if(a >= 'a' and a <= 'z'){
        return true;
    } else{
        return false;
    }

}

bool isPalindrome(char s[], int n){
    for(int i = 0; i < n / 2; i++){
        if(s[i] != s[n - 1 - i]){
            return false;;
        }
    }
    return true;
}

int main() {

    // string words 

    // char massive[20]; 
    // scanf("%s", &massive);

    // printf("%s", massive);
    // ascii 
    // isDigit()
    // isUpper()
    // isLower()

    // char a = '0';
    // char b = '2';
    // char c = '3';
    // if(isDigit('a')){
    //     printf("YEs");
    // } else{
    //     printf("No");
    // }

    // roma - not 
    // mama - not 
    // qwefttrewq
    // int n;
    // scanf("%d", &n);
    // char massive[n];
    // scanf("%s", &massive);
    // if(isPalindrome(massive, n)){
    //     printf("YESSS");
    // } else{
    //     printf("Nooo");
    // }
    return 0;
}
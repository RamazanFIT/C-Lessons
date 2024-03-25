#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    
    FILE *input;


    char data[100];

    input = fopen("example.txt", "r");

    for(int i = 'a'; i <= 'z'; i++){
        FILE *output;
        char word[2];
        word[0] = (char)i;
        output = fopen(word, "w");

        fprintf(output, "%s", word);

        fclose(output);
    }

    fclose(input);


    return 0;
}
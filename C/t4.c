#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {

    // file stream 
    // console 

    FILE *filepointerForScan;
    FILE *filepointerForSave;

    char data[100];

    filepointerForScan = fopen("example.txt", "r");
    filepointerForSave = fopen("exampleoutput.txt", "w");
    // r w 
    fprintf(filepointerForSave, "Saving file\n");
    
    // scanf 
    fscanf(filepointerForScan, "%s", &data);
    fprintf(filepointerForSave, "%s\n", data);

    fscanf(filepointerForScan, "%s", &data);
    fprintf(filepointerForSave, "%s", data);

    fclose(filepointerForScan);
    fclose(filepointerForSave);

    return 0;
}
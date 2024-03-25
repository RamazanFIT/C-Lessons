#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// #define aizere 5

int main() {
    // printf("%d", 5);
    // file stream 
    // console 

    FILE *filepointerForScan;
    FILE *filepointerForSave;

    char data[100];

    filepointerForScan = fopen("example.txt", "r");
    filepointerForSave = fopen("exampleoutput.txt", "w");
    // r w 
    // EOF -> END OF FILE 
    // while(fscanf(filepointerForScan, "%s", data) != EOF){
    //     // printf("Hello world");
    //     // printf("%s", data);
    //     fprintf(filepointerForSave, "%s +\n", data);
    // }
    // fr;lfnowenfinweifbweib fewfew fwefewf f wef ew ef ew fe wfew ew f ew f

    // fr;lfnowenfinweifbweib fewfew fwefewf f wef ew ef ew fe wfew ew f ew f

    // NULL - ничего нету 

    // for(int i = 0; i < 4; i++){
    //     fgets(data, sizeof(data), filepointerForScan);
    // }

    // fseek(filepointerForScan, 1, 0);
    // SEEK_END - 2
    // SEEK_CUR - 1
    // SEEK_SET - 0 
    // int cnt = 0;
    // while(fgets(data, sizeof(data), filepointerForScan) != NULL){
    //     cnt++;
    // }

    // fseek(filepointerForScan, 0, 0);

    // for(int i = 0; i < cnt / 2; i++){
    //     fgets(data, sizeof(data), filepointerForScan);
    // }

    int i = 1;
    while(fgets(data, sizeof(data), filepointerForScan) != NULL){

        if(i % 2 == 1){
            fprintf(filepointerForSave, "%s", data);
        }

        i++;
    }

    

    fclose(filepointerForScan);
    fclose(filepointerForSave);

    return 0;
}
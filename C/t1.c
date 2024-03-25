#include <stdio.h>

int main() {
    FILE *filePointer;
    char data[] = "Пример данных для записи в файл.";
    
    filePointer = fopen("example.txt", "w"); // открытие файла для записи
    if (filePointer == NULL) {
        printf("Ошибка при открытии файла.");
        return 1;
    }
    
    fprintf(filePointer, "%s\n", data); // запись данных в файл
    
    fclose(filePointer); // закрытие файла
    return 0;
}

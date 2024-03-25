#include <stdio.h>

int main() {
    FILE *filePointer;
    char data[100];
    
    // Открытие файла для записи в текстовом режиме
    filePointer = fopen("example.txt", "r");
    if (filePointer == NULL) {
        printf("Ошибка при открытии файла.");
        return 1;
    }
    
    // Запись данных в файл
    // fprintf(filePointer, "Первая строка данных.\n");
    // fprintf(filePointer, "Вторая строка данных.\n");
    // fprintf(filePointer, "Третья строка данных.\n");
    
    // Перемещение указателя файла к началу
    fseek(filePointer, 5, SEEK_SET);
    
    // Чтение данных из файла
    printf("Прочитанные данные:\n");
    // while (fgets(data, sizeof(data), filePointer) != NULL) {
    //     printf("%s", data);
    // }
    while (fscanf(filePointer, "%s", &data) != -1) {
        printf("%s\n", data);
    }
    
    // Закрытие файла
    fclose(filePointer);
    return 0;
}
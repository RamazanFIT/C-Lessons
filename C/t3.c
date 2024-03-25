#include <stdio.h>

int main() {
    FILE *file = freopen("example.txt", "w", stdout);
    FILE *fileout = freopen("sh.txt", "r", stdin);

    fseek(file, 1, SEEK_SET);

    char w[100];
    scanf("%s", &w);
    printf("%s", w);
    if (file == NULL) {
        perror("Ошибка при открытии файла");
        return 1;
    }

    printf("Текст, который будет записан в файл.\n");
    fclose(file);
    return 0;
}

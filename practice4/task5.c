#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char report[201]; 

    printf("Введите ваш отчет: ");
    fgets(report, sizeof(report), stdin);

    char *copy = strdup(report);

    printf("Оригинал: %s\n", report);
    printf("Копия: %s\n", copy);

    free(copy);
    return 0;
}


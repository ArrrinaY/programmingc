#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "LAUNCH-2025";
    char str2[30];
    printf("Введите код:\n");
    scanf("%s", str2);
    if (strcasecmp(str1, str2) == 0) 
        printf("Код принят");
    else 
        printf("Ошибка: неверный код!");
}
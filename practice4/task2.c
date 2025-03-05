#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char signal[101];
    printf("Введите сигнал: ");
    scanf("%100s", signal);

    size_t start = strspn(signal, "#*");
    size_t end = strlen(signal) - strcspn(signal + start, "#*");
    size_t lenght = end - start;

    char * message = strndup(signal+start, lenght);

    printf("Очищенное сообщение: %s\n", message);
    printf("Длина сообщения: %zu\n", lenght);

    free(message);
}
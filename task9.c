#include <stdio.h>

int main() {
    float t;
    printf("Введите время: ");
    scanf("%f", &t);
    int m;
    m = t / 60;
    float s;
    s = t - (m * 60);
    printf("%d минут %.1f секунд", m, s);
}
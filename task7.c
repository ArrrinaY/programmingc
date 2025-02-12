#include<stdio.h>

int main() {
    float x;
    
    printf("Частота сигнала(в ГГц):\n");
    scanf("%f", &x);
    
    if (x >= 2.5 && x <= 3.5)
        printf("Связь стабильна\n");
    else
        printf("Связь нестабильна\n");
}
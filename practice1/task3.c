#include<stdio.h>

int main() {
    char symbol;
    printf("Введите символ:");
    scanf("%s", &symbol);
    
    if (symbol >= 'A' && symbol <= 'Z')
        printf("Введённый символ входит в диапазон\n");
    else
        printf("Введённый символ не входит в диапазон\n");
}
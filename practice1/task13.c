#include<stdio.h>

int main() {
    int n;
    
    printf(" Введите количество космонавтов: \n");
    scanf("%d", &n);
    
    if (n % 2 == 0) 
        printf("Можем доставить всех космонавтов без остатка :) \n");
    else 
        printf("Не можем доставить всех космонавтов без остатка :( \n");
}
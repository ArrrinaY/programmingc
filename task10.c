#include<stdio.h>

int main() {
    int temp;
    
    printf(" Введите температуру: \n");
    scanf("%d", &temp);
    
    if (temp >= -150 && temp <= 120) 
        printf("Данная температура находится в диапазоне \n");
    else 
        printf("Данная температура не находится в диапазоне \n");
}
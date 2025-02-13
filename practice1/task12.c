#include<stdio.h>

int main() {
    int corner;
    
    printf(" Введите угол: \n");
    scanf("%d", &corner);
    
    if (corner >= -180 && corner <= 180) 
        printf("Данный угол находится в допустимом диапазоне \n");
    else 
        printf("Данный угол вызодит за допустимый диапазон! \n");
}
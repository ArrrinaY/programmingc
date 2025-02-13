#include<stdio.h>

int main() {
    int final = 500;
    int distance;
    
    printf("Введите расстояние до ближайшей станции подзарядки\n");
    scanf("%d", &distance);
    
    if (distance > 500) 
        printf("Вы не сможете добраться до подзарядки\n");
    else
        printf("Вы сможете доехать до станции подхарядки");

}
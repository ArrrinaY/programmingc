#include<stdio.h>

int main() {
    int weight;
    int weight_on_moon;
    
    printf(" Введите массу объекта: \n");
    scanf("%d", &weight);
    
    weight_on_moon = weight / 6;
    
    printf(" На луне этот объект имеет массу %d кг \n", weight_on_moon);

}
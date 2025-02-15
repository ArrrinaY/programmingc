#include<stdio.h>

int main() {
    int weight;
    printf("Введите вашу массу тела\n");
    scanf("%d", &weight);
    
    if (weight < 60 || weight > 90) 
        printf("Вы не можете пройти отбор");
    else 
        printf("Вы успешно прошли отбор");

}

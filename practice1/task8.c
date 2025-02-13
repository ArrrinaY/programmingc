#include<stdio.h>

int main() {
    int all_weight;
    int result;
    
    printf("Введите вес груза:\n");
    scanf("%d", &all_weight);
    
    if ((all_weight % 4) == 0) {
        result = all_weight / 4;
        printf("В кажддом отсеке будет %d кг\n", result);
    }else {
        printf("Вы не можете взять такое количество груза\n");
    }
}
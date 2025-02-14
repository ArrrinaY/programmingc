#include<stdio.h>



int main() {
    float oxygen;
    
    printf("Текущий запас кислорода\n");
    scanf("%f", &oxygen);
    
    if (oxygen < 15)
        printf("Включите аварийную систему\n");
    else
         printf("Уровень кислорода в норме\n");
}

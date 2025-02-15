#include<stdio.h>
#include <math.h>

int main() {
    double count_speed;
    double speed;
    
    printf("Введите рассчетную скорость:\n");
    scanf("%lf", &count_speed);
    printf("Введите фактическую скорость:\n");
    scanf("%lf", &speed);
    
    double diff = speed - count_speed; // ошибка логиги/арифметики в задаче
    
    if (fabs(diff) <= 0.1)
        printf("Орбита стабильна\n");
    else
        printf("Орбита нестабильна\n");
}

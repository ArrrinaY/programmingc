#include<stdio.h>

int main() {
    int date = 20250210;
    int currdate;
    
    printf("Введите дату(в формате год, месяц, число без пробелов):\n");
    scanf("%d", &currdate);
    
    if (currdate > date)
        printf("Старт миссии уже прошел\n");
    else 
        printf("Миссия еще не началась\n");
}
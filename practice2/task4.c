#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    char position[80];
    float salary;
};

int main() {
    int employee_count;

    printf("Введите количество сотрудников: \n");
    scanf("%d", &employee_count);

    struct Employee *employees = (struct Employee*) malloc(sizeof(struct Employee) * employee_count) ;

    for (int i = 0; i < employee_count; i++) {
        printf("Введите информацию о сотруднике(имя, должность, зарплата): \n");
        scanf("%s %s %f", employees[i].name, employees[i].position, &employees[i].salary);
    }

    for (int i = 0; i < employee_count; i++) {
        printf("Name: %s\nPosition: %s\nSalary: %f\n\n", employees[i].name, employees[i].position, employees[i].salary);
    }

    free(employees);
    return 0;
} 
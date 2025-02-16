#include<stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    int student_count;
    printf("Введите количество студентов: \n");
    scanf("%d", &student_count);

    struct Student *listStudents = (struct Student*) malloc(sizeof(struct Student) * student_count);

    for (int i = 0; i < student_count; i++) {
        printf("Введите данные студента (имя, возраст, средний балл): ");
        scanf("%s %d %f", listStudents[i].name, &listStudents[i].age, &listStudents[i].gpa);
    }

    for (int i = 0; i < student_count; i++) {
        printf("Name: %s\nAge: %d\nGPA: %.2f\n\n", listStudents[i].name,  listStudents[i].age, listStudents[i].gpa);

    }

    free(listStudents);
    return 0;
}
#include<stdio.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    int student_count;
    printf("Введите количество студентов: \n");
    scanf("%d", &student_count);

    struct Student students[student_count];

    for (int i = 0; i < student_count; i++) {
        printf("Введите данные студента (имя, возраст, средний балл): ");
        scanf("%s %d %f", students[i].name, &students[i].age, &students[i].gpa);
    }

    for (int i = 0; i < student_count; i++) {
        printf("Name: %s\nAge: %d\nGPA: %.2f\n\n", students[i].name,  students[i].age, students[i].gpa);

    }

    return 0;
}
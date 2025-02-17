#include <stdio.h>
#include <stdlib.h>

struct Course {
    char name[50];
    int credits;
    char professor[50];
};

int main() {
    int count_course;
    printf("Введите количество предметов: \n");
    scanf("%d", &count_course);

    struct Course *courses = (struct Course*) malloc(sizeof(struct Course) * count_course);

    for (int i = 0; i < count_course; i++) {
        printf("Введите информацию о предмете: \n");
        scanf("%s %d %s", courses[i].name, &courses[i].credits, courses[i].professor);
    }

    for (int i = 0; i < count_course; i++) {
        printf("Course: %s\nCredits: %d\nProfessor: %s\n\n", courses[i].name, courses[i].credits, courses[i].professor );
        
    }

    free(courses);
    return 0;
}
#include <stdio.h>

union Grade {
    int num;
    char letter;
};

int main() {
    int count_marks;
    printf("Введите количество оценок: \n");
    scanf("%d", &count_marks);

    union Grade grade[count_marks];

    for (int i = 0; i < count_marks; i++) {
        int type;
        printf("Введите тип оценки(1 - числовая, 2 - буквенная) и оценку студента: \n");
        scanf("%d", &type);

        if (type == 1) {
            scanf("%d", &grade[i].num);
            printf("Grade: %d\n", grade[i].num);
        } else if (type == 2) {
            scanf(" %c", &grade[i].letter);
            printf("Grade: %c\n", grade[i].letter);
        }
    }
    
    return 0;
}
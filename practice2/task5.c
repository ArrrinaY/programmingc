#include <stdio.h>

union Data {
    int i;
    int f;
    int str;
};

int main() {
    int choise;
    printf("Введите цифру (от 1 до 3):\n");
    scanf("%d", &choise);

    union Data data;

    if (choise == 1) {
        printf("Введите ваше число:\n");
        scanf("%d", &data.i );
        printf("Integer: %d", data.i);

    }else if (choise == 2) {
        printf("Введите ваше число:\n");
        scanf("%f", &data.f );
        printf("Float: %d", data.f);

    }else if (choise == 3) {
        printf("Введите вашу строку:\n");
        scanf("%s", &data.str );
        printf("String: %d", data.str);
    }

    return 0;
}

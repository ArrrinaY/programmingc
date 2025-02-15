#include<stdio.h>

struct Item {
    char name[50];
    int quantity;
    float price;
};

int main() {
    int items_count;
    printf("Введите количество товаров: \n");
    scanf("%d", &items_count);

    struct Item items[items_count];

    for (int i = 0; i < items_count; i++) {
        printf("Введите данные товара %d (наименование, количество, цена): ", i + 1);
        scanf("%s %d %f", items[i].name, &items[i].quantity, &items[i].price);
    }

    for (int i = 0; i < items_count; i++) {
        printf("Item: %s\nQuantity: %d\nPrice: %.2f\n\n", items[i].name, items[i].quantity, items[i].price);
    }

    return 0;
}
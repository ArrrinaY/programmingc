#include <stdio.h>
#include <stdlib.h>

enum EngineType{Gasoline, Diesel, Electric};

struct Vehicle {
    char mark[50];
    char model[50];
    int year;
    enum EngineYype engine;
};

int main() {
    int count_cars;

    printf("Введите количество транспортных средств: \n");
    scanf("%d", &count_cars);

    struct Vehicle *vehisels = (struct Vehicle*) malloc(sizeof(struct Vehicle) * count_cars);

    for (int i = 0; i < count_cars; i++) {
        printf("Введите информацию о транспортном средстве: \n");
        scanf("%s %s %d %d", vehicles[i].mark, vehisels[i].model, vehisels[i].year, &vehisels[i].engine);
    }

    for (int i = 0; i < count_cars; i++) {
        printf("Vehicle: %s %s\nYear: %d\nEngine Type: %s\n\n", vehicles[i].brand, vehicles[i].model, vehicles[i].year, vehicles[i].engine == 0 ? "Gasoline" : vehicles[i].engine == 1 ? "Diesel" : "Electric");
    }

    return 0;
}


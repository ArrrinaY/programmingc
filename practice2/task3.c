#include <stdio.h>
#include <stdlib.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Event {
    char name[50];
    struct Date date;
    char description[70];
};

int main() {
    int count_event;
    printf("Введите количество событий\n");
    scanf("%d", &count_event);
    struct Event *events = (struct Event*) malloc(sizeof(struct Event) * count_event);

    for (int i = 0; i < count_event; i++) {
        printf("Введите информацию о событии: \n");
        scanf("%s %d %d %d %s", events[i].name, &events[i].date.day, &events[i].date.month, &events[i].date.year, events[i].description);
    }

    for (int i = 0; i < count_event; i++) {
        printf("Event: %s\nDate: %d/%d/%d\nDescription: %s\n\n", events[i].name, events[i].date.day, events[i].date.month, events[i].date.year, events[i].description);
    }
    free(events)
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

enum Condition {Sunny, Cloudy, Rainy};
struct Weather {
    float temperature;
    float humidity;
    enum Condition condition;
};

int main() {
    struct Weather weather;

    printf("Введите текущую температуру, влажность и состояние: ");
    scanf("%f %f %d",& weather.temperature, &weather.humidity, &weather.condition);
    
    printf("Temperature: %.1f°C\n", weather.temperature);
    printf("Humidity: %.1f%%\n", weather.humidity);
    printf("Condition: ");
    
    switch(weather.condition) {
        case Sunny: printf("Sunny\n"); break;
        case Cloudy: printf("Cloudy\n"); break;
        case Rainy: printf("Rainy\n"); break;
    }

    return 0;
}
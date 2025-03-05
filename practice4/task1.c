#include <stdio.h>
#include <stdio.h>
#include <string.h>

int main() {
   
    char arr[][50] = {"SShuttle", "STurtle", "SSSR", "StarSearcher", "SSearcher", "SuperRocket", "SSD", "SSlim", "Soyuz", "SSoyus"};
    
    int count = sizeof(arr)/50;
    int found = 0;

    for (int i = 0; i < count; i++){
        if(strncmp(arr[i], "SS", 2) == 0) {
            printf("Корабли SS: %s\n", arr[i]);
            found = 1;
        }
    }

    if (!found) return 0;
    return 0;
}
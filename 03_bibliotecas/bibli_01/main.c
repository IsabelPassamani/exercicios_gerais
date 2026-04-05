#include <stdio.h>
#include "Includes/esfera_utils.h"

int main() {
    float raio_R, area, volume;

    scanf("%f" ,&raio_R);

    volume = calcula_volume(raio_R);
    area = calcula_area(raio_R);

    printf("Area: %.2f\nVolume: %.2f\n" ,area ,volume);
    return 0;
}
#include "esfera_utils.h"
#include <stdio.h>

int main(){
    float R, area, volume;
    scanf("%f",&R);
    printf("Area: %.2f\n", calcula_area(R));
    printf("Volume: %.2f\n", calcula_volume(R));

    return 0;
}
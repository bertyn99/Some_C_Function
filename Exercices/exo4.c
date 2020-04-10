#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "exo4.h"

float distEuclid(point p1, point p2)
{
    float distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    return distance;
}

int main()
{
    point p1 = {
        .x = 0,
        .y = 0};
    point p2 = {
        .x = 0,
        .y = 5};
    printf("la distance euclidien entre p1(%f,%f) et p2(%f,%f)  ets de %f\n", p1.x, p1.y, p2.x, p2.y, distEuclid(p1, p2));
}
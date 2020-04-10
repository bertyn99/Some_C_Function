#include <stdlib.h>
#include <stdio.h>

float minArray(float *array, int arrayLength)
{
    int i;
    float min = array[0];

    for (i = 0; i < arrayLength; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
    }
    return min;
}

int main(int argc, char const *argv[])
{
    float array[4] = {2, 2, 1, 4};

    printf("la valeur min du tableau  est %f \n", minArray(array, 4));
}

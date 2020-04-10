#include <stdlib.h>
#include <stdio.h>

float minArray(float *array, int arrayLength)
{
    int i;
    float total;

    for (i = 0; i < arrayLength; i++)
    {
        total += array[i];
    }
    return total;
}

int main(int argc, char const *argv[])
{
    float array[4] = {1, 2, 3.5, 4};

    printf("total du tableau %f \n", summArray(array, 4));
}

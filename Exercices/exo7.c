#include <stdlib.h>
#include <stdio.h>

int multiple(int n, int x)
{
    if (x % n == 0)
    {
        return 1;
    }

    return 0;
}
int *intervalMult(int n, int i)
{
    int *array = malloc(sizeof(int) * i);

    for (int c = 0; c < i; c++)
    {
        if (multiple(n, c))
        {
            array[c] = c;
        }
    }

    return array;
}
int sumArray(int array[], int arrayLength)
{
    int i;
    float total;

    for (i = 0; i < arrayLength; i++)
    {
        total += array[i];
    }
    return total;
}
void affiche(int tableau[], int tailleTableau)
{
    int i;

    for (i = 0; i < tailleTableau; i++)
    {
        printf("%d\n", tableau[i]);
    }
}
int main()
{
    int n;
    int i;
    printf("rentrez la valeur maximal de l'interval:");
    scanf("%i", &i);
    printf("\n rentrez la valeur u nombre dans vous voulez les multiple dans l'intervale");
    scanf("%i", &n);
    int *array = intervalMult(n, i);
    affiche(array, i);
    printf("total du tableau %i \n", sumArray(array, i));
}
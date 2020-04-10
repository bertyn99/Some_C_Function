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
    int n = 2;
    int i = 10;
    int array[i];
    affiche(intervalMult(n, i), i);
}
#include <stdlib.h>
#include <stdio.h>

int facto(int n)
{
    int i;
    int resultat;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        for (resultat = 1; n > 1; n--)
        {
            resultat *= n;
        }
        return resultat;
    };
}

int main()
{
    int n = 1;
    printf("%i! = %i\n", n, facto(n));
    n = 4;
    printf("%i! = %i\n", n, facto(n));
}
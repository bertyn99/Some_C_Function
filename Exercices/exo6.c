#include <stdlib.h>
#include <stdio.h>

void pointeur(int a)
{

    printf("addresse  %i\n", a);
    printf("addresse  %p\n", &a);
}

int main()
{
    int a = 5;
    pointeur(a);
}
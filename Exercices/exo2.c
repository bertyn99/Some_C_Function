#include <stdlib.h>
#include <stdio.h>

int stringlength(const char *string)
{
    int length = 0;
    char stringActual = 0;

    do
    {
        stringActual = string[length];
        length++;
    } while (stringActual != '\0'); // On boucle tant qu'on n'est pas arrivé à l'\0

    length--; // On retire 1 caractère de long pour ne pas compter le caractère \0

    return length;
}

int main()
{
    char string[] = "Salut";
    int length = 0;

    length = stringlength(string);

    printf("La chaine de caractaire %s fait %d caracteres de long\n", string, length);

    return 0;
}
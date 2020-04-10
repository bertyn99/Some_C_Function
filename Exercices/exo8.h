#include <stdlib.h>
#include <stdio.h>

typedef struct elm;
{
    int nombre;
    struct elm *next;
}
elm;

typedef struct file
{
    int size;
    elm *head;
} file;
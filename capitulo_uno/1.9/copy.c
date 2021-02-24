#include"jota.h"

/**
 *j_copy- Copie of 'from' to 'to'
 *Return: string copied
 */

int j_copy(char to[], char from[])
{
    int i;
    for (i = 0; (to[i] = from[i]) != '\0'; ++i)
        ;
    return (i);
}

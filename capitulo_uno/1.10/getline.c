#include"jota.h"

/**
 *getline_j- read an line in s, back you longest
 *Return: exit succesfull
 */

int j_getline(void)
{
    char line[];
    int c, i;

    for (i = 0; i < (MAXSIZE - 1) && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;

    if(c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';

    return (i);
}

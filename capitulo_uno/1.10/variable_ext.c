#include"jota.h"

/**
 *main- Print the longest input line with variable globals
 *Return: exit succesfull
 */

int main(void)
{
    int c, len;
    int max;
    char longest[];

    max = 0;
    while ((len = j_getline()) > 0)
        if(len > max)
        {
            max = len;
            j_copy();
        }
    if(max > 0)
        printf("\nLa linea mas larga es:\n");
        printf("%s\n", longest);

    return (0);
}

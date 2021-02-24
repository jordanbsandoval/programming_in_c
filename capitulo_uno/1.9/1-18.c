#include "jota.h"

/**
 *main- print to line more long of the input
 *Return: exit succesfull
 */

int main(void)
{
    int c, max, len;
    char line[MAXSIZE];
    char longest[MAXSIZE];

    max = 0;
    while (len = j_getline(line, MAXSIZE) > 0)
        if(len > max)
        {
            max = len;
            j_copy(longest, line);
        }
    if(max > 0)
        printf("\n%s\n", longest);

    return (0);
}

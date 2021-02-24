#include "jota.h"

/**
 *main- correctly prints the length of input lines, arbitrarily long 
 *Return: exit succesfull
 */

int main(void)
{
    int c, max, len, temp;
    char line[MAXSIZE];
    char longest[MAXSIZE];

    max = temp = 0;
    while (len = j_getline(line, MAXSIZE) > 0)
        if(len > max)
        {
            max = len;
            temp = j_copy(longest, line);
        }
    if(max > 0)
    printf("%d\n", temp);

    return (0);
}

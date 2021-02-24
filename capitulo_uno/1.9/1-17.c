#include "jota.h"

/**
 *
 *
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
    if(temp > 80)
    printf("%s\n", longest);

    return (0);
}

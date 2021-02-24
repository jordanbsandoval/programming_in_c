#include<stdio.h>

/**
 *
 *
 */

int main(void)
{
    int i;
    i = 0;

    while ((i += 2) < 200)
        printf("%d\n", i);

    return (0);
}

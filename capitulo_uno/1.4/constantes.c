#include <stdio.h>

/**
 *main- constans very import in an program
 *Return: exit succesfull
 */

#define UPPER 20
#define INICIO 0
#define STOP 300

int main(void)
{
    int fahr;

    for (fahr = 0; fahr <= STOP; fahr = fahr + UPPER)
        printf("%d\t%d\n", fahr, 5 * (fahr - 32) / 9);

    return (0);
}

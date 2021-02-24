#include"jota.h"

/**
 *main- Program initial to call another function
 *Return: exit succesfull
 */

int main(void)
{
    conversion_j();
    return (0);
}


/**
 *conversion_j- program of converse on grade
 *Return: exit succesfull
 */

int conversion_j(void)
{
    int fahr;

    for(fahr = 0; fahr <= UPPER; fahr = fahr + AUM)
        printf("%d\t%d\n", fahr, 5 * (fahr - 32) / 9);
}

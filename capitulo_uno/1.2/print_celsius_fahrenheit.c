#include<stdio.h>

/**
 *
 *
 */

int main(void)
{
    float fahr;
    int aum, stop;

    aum = 20;
    stop = 300;

    printf("Table celsius - fahrenheit\n");

    for (fahr = 0; fahr <= stop; fahr = fahr + aum)
        printf(" \t%.0f\t%.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));

    return (0);
}

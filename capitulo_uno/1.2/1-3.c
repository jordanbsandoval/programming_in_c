#include<stdio.h>

/**
 *main- Modify the program of conversion of temperatures of mode that wirte an header on table
 *Return: exit succesfull
 */

int main(void)
{
    int fahr, cel;
    int i, aum, stop;

    fahr = i = 0;

    printf("\tTable\n   fahrenheit - centigrados\n");
    for (aum = 20, stop = 300; fahr <= stop; fahr = fahr + aum)
        printf("%8d\t%d\n", fahr, 5 * (fahr - 32) / 9);

    return (0);
}

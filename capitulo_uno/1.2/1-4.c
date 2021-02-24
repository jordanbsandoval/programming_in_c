#include<stdio.h>

/**
 *main- write an program that print the table correspondent Celsius - Fahrenheit 
 *Return: exit succesfull
 */

int main(void)
{
    int fahr, cel;
    int i, aum, stop;

    fahr = cel = i = 0;

    printf("\tTable\n   centigrados - fahrenheit\n");
    for (aum = 20, stop = 300; cel <= stop; cel = cel + aum, fahr = fahr + aum)
        printf("%8d\t%d\n", cel, 5 * (cel + 32) / 9);

    return (0);
}

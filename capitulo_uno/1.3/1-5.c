#include<stdio.h>

/**
 *main- Modificated the program of conversion of termperatures of tha way that write the table in orden inverse
 *Return: exit succesfull
 */

int main(void)
{
    int fahr;

    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%d\t%d\n", fahr, 5 * (fahr - 32) /9);

    return (0);
}

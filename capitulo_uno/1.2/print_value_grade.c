#include<stdio.h>

/**
 *main- print the value from fahrenheit to celsius
 *Return: exit succesfull
 */

int main(void)
{
    int celsius, fahr;
    int i, aum, stop;

    celsius = i = 0;
    aum = 20;
    stop = 200;

    printf("\tTable of Fahrenheit to celsius\t\n");
    
    for (fahr = 0; fahr <= stop; fahr = fahr + aum)
            printf("\t\t%4d\t%4d\n", fahr, 5 * (fahr - 32) / 9);
    
    return (0);
}

#include<stdio.h>

/**
 *main- Program to count the number of coincidence in an array of number
 *Return: exit succesfull
 */

int main(void)
{
    int c, i;
    int arreglo_number[10];

    for (i = 0; i < 10; ++i)
        arreglo_number[i] = 0;

    while ((c = getchar()) != EOF)
        if(c >= '0' && c <= '9')
            ++arreglo_number[c - '0'];
    
    for (i = 0; i < 10; ++i)
        printf("the number of coincidence, is: Number_arreglo[%d] = %d\n", i, arreglo_number[i]);

    return(0);
}

#include<stdio.h>

int power_j(int, int);
/**
 *
 *
 */

int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
        printf("%d\n", power_j(2, i));
}

/**
 *power_j- program that employ the exponence
 *Return: exit succesfull
 */

int power_j(int base, int exp)
{
    int p;

    for (p = 1; exp > 0; exp--)
        p = base * p;
    
    return (p);
}

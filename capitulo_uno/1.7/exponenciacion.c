#include"jota.h"

/**
 *power_j- Program that raise one integer by a power
 *Return: exit succesfull
 */

int power_j(int base, int exp)
{
    int i, temp;

    temp = base;
    for (i = 1; i <= exp; i++)
        temp = base * temp;
    
    return(temp);
}

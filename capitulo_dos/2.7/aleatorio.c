#include<stdio.h>

unsigned long int next = 1;
void s_rand(unsigned int seed);
int j_rand(void);

/**
 *main- call other functions
 *Return: exit succesfull
 */

int main(void)
{
    int i;

    for (i = 0; i < 11; ++i)
    {
        s_rand(i);
        printf("%d\n", j_rand());
    }
    return (0);
}

/**
 *j_rand- back to integer pseudoaletorie
 *Return: exit succesfull
 */

int j_rand(void)
{
    next = next * 1103515245;
    return ((unsigned int)((next / 65536) % 32768));
}

/**
 *s_rand- focus the init for rand
 *Return: exit succesfull
 */

void s_rand(unsigned int seed)
{
    next = seed;
}

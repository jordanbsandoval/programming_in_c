#include<stdio.h>

/**
 *main- imput and output of character's
 *Return: exit succesfull
 */

/**
 *getchar- Is function read the next character and return it as it's value
 *Return: number decimal ascii
 */

/**
 *putchar- Is function write a character every time it is invoked.
 *Return: write it's contened as it character
 */

int main(void)
{
    int c;

    while ((c = getchar()) != EOF)
        if(c != 'e')
            putchar(c);

    return(0);
}

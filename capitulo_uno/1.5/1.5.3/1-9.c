#include<stdio.h>

/**
 *main- program that replace two space in white by only one space
 *Return: exit succesfull
 */

int main(void)
{
    int c, temp;
    temp = '\0';

    while ((c = getchar()) != EOF)
    {
        if(c != ' ' || temp != ' ')
            putchar(c);
        temp = c;
    }
    return(0);
}

#include<stdio.h>

int j_converse(char s[]);

/**
 *main- conversion de tipos
 *Return: exit succesfull
 */

int main(void)
{
    char numeros[10]= "0123456789";
    printf("%d\n", j_converse(numeros));

    return (0);
}

/**
 *j_converse- function to converter an char type an int
 *Return: exit succesfull
 */

int j_converse(char s[])
{
    int i, n;
    n = 0;

    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = n * 10 + (s[i] - '0');

    return (n);
    
}

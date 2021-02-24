#include<stdio.h>

int biciesto(char s[]);

/**
 *main- program init for call other function
 *Return: exit succesfull
 */

int main(void)
{
    char year[4];
    int c, i;
    for (i = 0; (c = getchar()) != EOF; ++i)
        if(c >= '0' && c <= '9')
            year[i] = c;

    printf("\n%d\n", biciesto(year));
    return (0);
}

/**
 *biciesto- Program to determined if an year is biciest
 *Return: exit succesfull
 */

int biciesto(char s[])
{
    int i, n;
    n = 0;

    for (i = 0; s[i] != '\0'; ++i)
    {
        if((s[i] % 4 == 0 && s[i] % 100 != 0) || s[i] % 400 == 0)
        {   
            n = 10 * n + (s[i] - '0');
            printf("%d: Es un año biciesto\n", n);
        }
        else
        {
            n = 10 * n + (s[i] - '0');
            printf("%d: No es un año biciesto\n", n);
        }
    }
}

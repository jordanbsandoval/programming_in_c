#include<stdio.h>

int j_htoi(char []);

/**
 *
 *
 */

int main(void)
{
    int i;
    char hexa[]= {'\x30','\x31','\x32'};

    for (i = 0; i < 3; i++)
        printf("%d\n", hexa[i]);

    return (0);
}

/**
 *
 *
 */

int j_htoi(char s[])
{
    int i, n;
    n = 0;

    for (i = 0; s[i] >= '0' && s[i] <= '9'; i++)
        n = 10 * n + (s[i] - '0');

    return (n);
            
}

#include<stdio.h>

int j_lower(int s);

/**
 *
 *
 *
 */

int main(void)
{
    int letra = 'A';
    printf("%c\n", j_lower(letra));
}

int j_lower(int s)
{
    int result;

    result = (s >= 'A' && s <= 'Z') ? (s + 'a' - 'A') : (s);
    return (result);
}

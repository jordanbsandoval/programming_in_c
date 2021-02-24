#include<stdio.h>

/**
 *main- Program to converter of uppercase to lowercase
 *Return: exit succesfull
 */

int main(void)
{
    char mayus = 'B';
    printf("%c\n", j_lower((int)mayus));

    return (0);
}

/**
 *
 *
 */

int j_lower(int s);

int j_lower(int s)
{
    if(s >= 'A' && s <= 'Z')
        return (s + 'a' - 'A');
    else
        return (s);
}

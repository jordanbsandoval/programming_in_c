#include<stdio.h>

/**
 *main- Program to the count of characters
 *Return: number of characters
 */

int main(void)
{
    int c, count_char;

    count_char = 0;
    while((c = getchar()) != EOF)
        ++count_char;
    
    printf("Numero de caracteres introducidos: %d\n", count_char);
    return (0);
}

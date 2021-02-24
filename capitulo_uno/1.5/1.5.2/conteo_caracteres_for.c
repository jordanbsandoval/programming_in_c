#include<stdio.h>

/**
 *main- program from count characters with an for
 *Return: exit succesfull
 */

int main(void)
{
    int c, count_characters;

    for (count_characters = 0; (c = getchar()) != EOF; ++count_characters);
        ;

    printf("La cantidad de caracteres introducidos, son: %d\n", count_characters);

    return (0);
}

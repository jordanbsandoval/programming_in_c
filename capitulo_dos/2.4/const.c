#include<stdio.h>

int j_strlen(const char s[]);

/**
 *main- probando constantes
 *Return: exit succesfull
 */

int main(void)
{
    const char palabra[]= "Precaucion";
    printf("%d\n", j_strlen(palabra));

    return (0);
}

int j_strlen(const char s[])
{
    int i;
    for (i = 0; s[i] != '\0'; ++i)
        ;
    return (i);
}

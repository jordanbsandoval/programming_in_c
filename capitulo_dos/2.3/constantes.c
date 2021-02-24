#include<stdio.h>
#define OCTAL '\037'
#define HEXA '\x1F'

/**
 *main- probando constantes
 *Return: exit succesfull
 */

int main(void)
{
    printf("Octal: %d\nHexadecimal: %d\n", OCTAL + 1, HEXA);
}

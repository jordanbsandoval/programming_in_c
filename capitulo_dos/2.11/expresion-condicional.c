#include<stdio.h>

int mayou(int a, int b);

/**
 *
 *
 *
 */

int main(void)
{
    int numero_uno;
    int numero_dos;

    numero_uno = 22;
    numero_dos = 33;

    printf("el numero mayor en el programa es: %d\n", mayou(numero_uno, numero_dos));
    return (0);
}

int mayou(int a, int b)
{
    if(a > b)
        return (a);
    else
        return (b);
}

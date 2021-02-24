#include<stdio.h>

/**
 *main- program to count line
 *Return: number of lines
 */

int main(void)
{
    int c, count_line;
    
    count_line = 0;
    while ((c = getchar()) != EOF)
        if(c == '\n')
            ++count_line;

    printf("El numero de lineas, son: %d\n", count_line);
    
    return (0);
}   

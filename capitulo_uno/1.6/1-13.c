#include"jota.h"

/**
 *main- write an program that print the histogram of the longited of the words of imput
 *Return: exit succesfull
 */

int main(void)
{
    int c, temp, i, p;
    int histogram[10];
    temp = '\0';

    for (i = 0; i < 10; i++)
        histogram[i] = 0;
        
    p = 0;

    while ((c = getchar()) != EOF)
    {
        if(DENTRO(c))
            ++histogram[p];
        else
            histogram[++p];
            
        temp = c;
    }
    for (i = 0; i < 10; i++)
        printf("%d\n", histogram[i]);
    
    return (0);
}

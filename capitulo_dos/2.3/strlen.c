#include<stdio.h>

int j_strlen(char[]);

/**
 *main- Call me an function j_strlen
 *Return: exit succesfull
 */

int main(void)
{
    char cadena[] = "que tan larga es esta cadena";
    
    printf("%d\n", j_strlen(cadena));

    return (0);

}

/**
 *j_strlen- function to determin the width of string
 *Return: number of string width
 */

int j_strlen(char s[])
{
    int i;

    for(i = 0; s[i] != '\0'; ++i)
        ;

    return(i);
}

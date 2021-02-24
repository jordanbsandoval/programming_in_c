#include<stdio.h>
#define MAXSIZE 40

void j_concat(char s[], char t[]);

/**
 *main- call the function to concatend two strings
 *Return: exit succesfull
 */

int main(void)
{
    char string[MAXSIZE]= "cadena uno";
    char string_dos[]= "cadena dos";
    
    j_concat(string, string_dos);
    printf("%s\n", string);

    return (0);
}

/**
 *j_concat- concatena the two strings
 *Return: string concatened
 */

void j_concat(char s[], char t[])
{
    int i, j;
    i = 0;

    while (s[++i] != '\0') 
            ;

    for (j = 0; (s[i++] = t[j++]) != '\0';)
        ;
}

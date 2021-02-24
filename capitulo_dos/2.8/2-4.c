#include<stdio.h>
#define MAXSIZE 40

void j_squeeze_string(char s[], char t[]);

/**
 *main- Llamando a la funcion que compara dos cadenas y elimina los caracteres en comun
 *Return: exit succesfull
 */

int main(void)
{
    char string[MAXSIZE]= "cadena uno";
    char string_dos[]= "cadena dos";
    
    j_squeeze_string(string, string_dos);
    printf("%s\n", string);

    return (0);
}

/**
 *j_squeeze_string- Function that comparative two strings and delete the characters in comun
 *Return: Delete similars characters
 */

void j_squeeze_string(char s[], char t[])
{
    int i, j;

    for (j = i = 0; s[i] != '\0'; i++)
        if(s[i] != t[i])
            s[j++] = s[i];

    s[j] = '\0';
}

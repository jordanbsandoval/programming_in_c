#include<stdio.h>
#define MAXSIZE 60

char j_any(char [], char []);

/**
 *main- 
 *Return: exit succesfull
 */

int main(void)
{
    char string[MAXSIZE] = "hola como esta";
    char string_dos[]= "sera tal vez";

    printf("%c\n",j_any(string, string_dos));

    return (0);
}

/**
 *j_any-
 *Return: back to position where search an same character
 */

char j_any(char s[], char t[])
{
    int i, j;
    char cadena[2]="";
    
    j = 0;
    for (i = 0; s[i] != '\0'; i++)
        if(s[i] == t[i])
        {
            cadena[j] = s[i];
            break;
        }
    cadena[++j] = '\0';

    return (cadena[0]);
}

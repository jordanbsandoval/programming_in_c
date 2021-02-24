#include<stdio.h>

void j_squeeze(char [], char);

/**
 *main- 
 *Return: exit succesfull
 */

int main(void)
{
    int c;
    char pattern[]= "hola como estan";

    while ((c = getchar()) != EOF)
        j_squeeze(pattern, c);

    printf("%s\n", pattern);
    
    return (0);
}

/**
 *
 *
 */

void j_squeeze(char s[], char c)
{
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++)
        if(s[i] != c)
            s[j++] = s[i];

    s[j] = '\0';
}

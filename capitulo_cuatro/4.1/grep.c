#include <stdio.h>
#define MAXSIZE 60

int j_compart(char s[], char t[]);
int j_getchar(char[], int);

char patron[]= "jordan";

/**
 *main- 
 *
 *Return: exit succesfull
 */

int main(void)
{
    char linea[MAXSIZE];
    int found = 0;

    while (j_getchar(linea, MAXSIZE) > 0)
        if(j_compart(linea, patron) >= 0)
        {
            printf("%s\n", linea);
            found++;
        }

    return (found);
}

int j_getchar(char s[], int lim)
{
    int c, i;
    i = 0;

    for (i = 0; i < (lim - 1) && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    if (c == '\n')
        s[i++] = c;

    s[i] = '\0';
    return (i);
}

int j_compart(char s[], char t[])
{
    int i, j, tmp;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0, tmp = i; t[j] != '\0' && s[tmp] == t[j]; j++, tmp++)
            ;
        if(j > 0 && t[j] == '\0')
            return (i);
    }
    return (-1);
}

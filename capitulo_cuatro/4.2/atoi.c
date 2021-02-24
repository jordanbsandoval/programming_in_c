#include <stdio.h>
#include <ctype.h>

int j_atoi(char []);

/**
 *
 *
 *
 */

int main(void)
{
    char frase[]= "todo bien";
    printf("%d\n", j_atoi(frase));

    return(0);
}

int j_atoi(char s[])
{
    double atof(char s[]);

    return ((int) atof(s));
}

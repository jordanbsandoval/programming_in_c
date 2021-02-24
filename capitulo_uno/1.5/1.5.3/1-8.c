#include<stdio.h>

/**
 *main- Program to count space in white, tabulatores and new lines
 *Return: exit succesfull
 */

int main(void)
{
    int c, sw, tb, nl, other_char;

    sw = tb = nl = other_char = 0;
    while ((c = getchar()) != EOF)
        if(c == ' ')
            ++sw;
        else if(c == '\t')
            ++tb;
        else if(c == '\n')
            ++nl;
        else
            ++other_char;

    printf("the number of spaces in white, are: %d\n", sw);
    printf("the number of tabulates, are: %d\n", tb);
    printf("the number of new lines, are: %d\n", nl);
    printf("the number anyone other character, is: %d\n", other_char);
    
    return(0);
}

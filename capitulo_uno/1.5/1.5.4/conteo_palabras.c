#include<stdio.h>
#define IN 1
#define OUT 0

/**
 *main- program to count words
 *Return: number of words
 */

int main(void)
{
    int c, nl, nw, all_c, state;

    nl = nw = 0;
    state = OUT;

    for (all_c = 0; (c = getchar()) != EOF; ++all_c)
    {
        if(c == '\n')
            ++nl;
        if(c == ' ' || c == '\t' || c == '\n')
            state = OUT;
        else if(state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("The number of characters inserted, are: %d\n", all_c);
    printf("The number of new lines, are: %d\n", nl);
    printf("The number of words, are: %d\n", nw);
    return (0);
}

#include<stdio.h>
#define DENTRO(x) (((x) != (' ')) && ((x) != ('\t')) && ((x) != ('\n')) && ((x) != ('\0')))
#define FUERA(s) (((s) == (' ')) || ((s) == ('\t')) || ((s) == ('\n')))
/**
 *main- Program that print one word for line
 *Return: exit succesfull
 */

int main(void)
{
    int c, count_word, temp;
    temp = '\0';
    count_word = 0;

    while ((c = getchar()) != EOF)
    {
        if(DENTRO(temp) && FUERA(c))
            printf("\n");
        else if(DENTRO(c))
            printf("%c", c);
        temp = c;
    }
    return (0);
}

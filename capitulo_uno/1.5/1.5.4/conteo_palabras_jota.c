#include<stdio.h>
#define DENTRO(x) (((x) != (' ')) && ((x) != ('\t')) && ((x) != ('\n')) && ((x) != ('\0')))
#define FUERA(s) (((s) == (' ')) || ((s) == ('\t')) || ((s) == ('\n')))
/**
 *main- Program to count words
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
            ++count_word;
        temp = c;
    }
    printf("the number of words, are: %d\n", count_word);
    return (0);
}

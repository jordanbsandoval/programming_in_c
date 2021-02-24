#include"jota.h"

/**
 *main- Program to count the number of coincidence's one letter
 *Return: exit succesfull
 */

int main(void)
{
    int c, i, p;
    int frecuencia[27];
    char characters[27];
    char inicio = 'a';

    for (i = 0; inicio <= 'z'; inicio++, ++i)
        characters[i] = inicio;

    characters[i] = '\0';

    for (i = 0; i < 27; i++)
        frecuencia[i] = 0;
    
    while ((c = getchar()) != EOF)
        for (i = 0; characters[i] != '\0'; i++)
            if(c == characters[i])
                ++frecuencia[i];
        
    for (p = 0; p < 26; p++)
        printf("La frecuencia de la letra %c, es: %d\n", characters[p], frecuencia[p]);
    
    return (0);
}

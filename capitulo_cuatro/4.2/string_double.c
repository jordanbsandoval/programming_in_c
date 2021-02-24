#include <stdio.h>
#include <ctype.h>

double j_atof(char []);
/*char j_space(char []);*/

/**
 *
 *
 *
 */

int main(void)
{
    char cadena[]= "por el movil";
    double j_atof(char []);
    printf("%f\n", j_atof(cadena));

    return (0);
}


double j_atof(char s[])
{
    int i, sign;
    double result, power;

    for (i = 0; isspace(s[i]); i++)
        ;

    sign = (s[i] == '-') ? -1 : 1;
    if(s[i] == '+' || s[i] == '-')
        i++;

    for (result = 0.0; isdigit(s[i]); i++)
        result = 10.0 * result + (s[i] - '0');

    if(s[i] == '.')
        i++;

    for (power = 10.0; isdigit(s[i]); i++)
    {
        result = 10.0 * result + (s[i] - '0');
        power *= 10.0;
    }
    return (sign * result / power);
}

/*

void j_space(char s[])
{
    int i, j;

    j = 0;
    for (i = 0; s[i] != '\0'; i++)
        if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
            s[j++] = s[i];

    if(s[j] == '\n')
        j++;

    s[j] = '\0';
}
*/

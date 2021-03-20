#include<stdio.h>

/**
 *main- imprime la tabla de fahrenheit a celsius
 *Return: exit succesfull
 */

int main(void)
{
	int fahr;
	for (fahr = 0; fahr <= 300; fahr+= 20)
		printf("%d\t%d\n", fahr, 5 * (fahr-32) / 9);

	return (0);
}

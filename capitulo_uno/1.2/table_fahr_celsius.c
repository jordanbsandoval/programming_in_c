#include<stdio.h>

/**
 *main- imprime la tabla de fahrenheit a celsius
 *Return: exit succesfull
 */

int main(void)
{
	int fahr;
	printf("Tabla Fahrenheit-Celsius\n");
	printf("------------------------\n");
	for (fahr = 0; fahr <= 300; fahr+= 20)
	{
		printf("\t%d%6d\n", fahr, 5 * (fahr-32) / 9);
		printf("----------------------\n");
	}

	return (0);
}

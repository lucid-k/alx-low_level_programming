#include "main.h"
#include <stdio.h>

/**
 *main - solution to fizz buzz problem
 *
 *Return: Always 0
 */

int main(void)
{
	int i;

	i = 1;

	printf("%d ", i);

	for (i = 2; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);

		if (i < 100)
			putchar(' ');
		else
			putchar(' ');
	}
	return (0);
}

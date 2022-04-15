#include <stdio.h>

/**
 * main - prints numbers 1 to 100
 * Description: prints Fizz for multiples of 3
 *      :prints Buzz for multiples of 5
 *      :prints FizzBuzz for multiples of both 3 and 5
 *
 * Return: 0 for success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{

		printf("FizzBuzz ");

		} else if (i % 5 == 0)
		{

			printf("Buzz ");

		} else if (i % 3 == 0)
		{

			printf("Fizz ");

		} else
		{

		printf("%d ", i);

		}
	}
	return (0);
}

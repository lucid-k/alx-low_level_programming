#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints "Print single digit numbers"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}
	printf("\n");
	return (0);
}

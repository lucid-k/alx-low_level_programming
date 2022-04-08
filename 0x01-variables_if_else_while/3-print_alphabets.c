#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints "Print lowercase and uppercase letters"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x = 'a', y = 'A';

	while (x < 123)
	{
		putchar(x);
		x++;
	}

	while (y < 91)
	{
		putchar(y);
		y++;
	}

	putchar('\n');
	return (0);
}

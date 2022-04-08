#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints "Print small letters"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x = 'a';

	while (x < 123)
	{
		putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}

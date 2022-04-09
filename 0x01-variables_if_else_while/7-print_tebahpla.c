#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints "reverse lowercase letters"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x = 'z';

	while (x > 96)
	{
		putchar(x);
		x--;
	}

	putchar('\n');
	return (0);
}

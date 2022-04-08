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
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(x + i);
	}

	for (i = 0; i < 26; i++)
	{
		putchar(y + i);
	}

	putchar('\n');
	return (0);
}

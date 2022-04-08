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
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(x + i);
	}

	putchar('\n');
	return (0);
}

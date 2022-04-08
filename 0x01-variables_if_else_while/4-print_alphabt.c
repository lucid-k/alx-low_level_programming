#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints "Print lowercase letters except q and e"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 97; x < 123; x++)
	{
		if ((x == 'e') || (x == 'q'))
		{
			continue;
		} else
		{
			putchar(x);
		}
	}

	putchar('\n');
	return (0);
}

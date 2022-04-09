#include <stdio.h>

/**
 * main - print numbers
 *
 * Description: print all possible
 * combinations of
 * single digit numbers without char
 *
 * Return: always 0 success
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar(10);

	return (0);
}

#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print hex characters
 *
 * Return: always 0 success
 */

int main(void)
{
	int i = 48, j = 97;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	while (j < 103)
	{
		putchar(j);
		j++;
	}
	putchar(10);

	return (0);
}

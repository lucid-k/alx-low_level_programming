#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print single digit numbers without char
 *
 * Return: always 0 success
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}

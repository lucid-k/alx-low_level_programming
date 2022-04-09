#include <stdio.h>

/**
 * main - print number combinations
 *
 * Description: print all possible
 * combinations of
 * two digits numbers without repetition
 *
 * Return: always 0 success
 */

int main(void)
{
	int i = 48, j = 48;

	while (i < 58)
	{
		j = i + 1;
		while (j < 58)
		{
			putchar(i);
			putchar(j);

			if (i < 56 || j < 57)
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}
		i++;
	}
	putchar(10);
	return (0);
}

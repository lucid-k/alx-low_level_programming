#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints string in reverse
 *
 * @s: str param to be printed in reverse
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

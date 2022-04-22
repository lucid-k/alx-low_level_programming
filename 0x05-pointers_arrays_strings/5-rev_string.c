#include "main.h"
#include <stdio.h>

/**
 * rev_string - prints string in reverse
 *
 * @s: str param to be printed in reverse
 */

void rev_string(char *s)
{
	int length, j, i, middle;
	char temp;

	length = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		length++;
	}

	middle = length / 2;

	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: prints "Print whether the number stored in the
 * variable is positive or negative"
 *
 * Return: does not return a value
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	} else if (i < 0)
	{
		printf("%d is negative\n", i);
	} else
	{
		printf("%d is zero\n", i);
	}
}

#include <stdio.h>
#include <sys/syscall.h>
#include <unistd.h>

/**
 * main - runs function
 *
 * Return: Always 1 (standard error)
 */
int main(void)
{
	char x[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	syscall(SYS_write, 1, x, (sizeof(x)-1));
	return (1);
}

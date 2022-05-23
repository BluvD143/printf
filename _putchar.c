#include "main.h"
#include <unistd.h>

/**
 * _putchar - to print a character
 * @c: character to be printed
 * Description - this uses a local buffer of 1024 chars
 *
 * Return: written character
 */

int _putchar(char c)
{
	static char buff[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buff, i);
		i = 0;
	}
	if (c != -1)
	{
		buff[i] = c;
		i++;
	}
	return (1);
}

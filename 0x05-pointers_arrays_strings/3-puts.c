#include "main.h"

/**
 * _put - prints a string, followed by a new line, to stdout
 * @str: string to print
 */

void _puts(char *str)
{
	while (*str != '\0')
		_putschar(*str++);

	_putchar('\n');
}
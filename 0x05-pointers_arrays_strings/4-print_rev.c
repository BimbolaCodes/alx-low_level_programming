#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: pointer referencing the string
 * return: 0
 */

void print_rev(char *s)
{
	int j = 0;

	while (s[j])
		j++;

	while (j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}

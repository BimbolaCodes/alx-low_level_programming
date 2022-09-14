#include "main.h"
/**
 * print function - prints the alphabet in lowercase
 *
 * Return: 0
 */

void print_alphabet_x10(void);
{
	char c, i;

	for (i = 1 ; i <= 9 ; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
	}
	_putchar('\n');
}


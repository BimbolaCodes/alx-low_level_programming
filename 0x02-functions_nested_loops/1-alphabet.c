#include "main.h"
/**
 * main - Entry point
 *
 * Description: print alphabet function print_alphabet to abc
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
_putchar(c);
	}
_putchar('\n');
}

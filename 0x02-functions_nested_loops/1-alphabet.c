#include "main.h"
/**
 * main - Entry point
 *
 * Description: programs prints an alphabet from a-z
 *
 * Return: Return always 0(success)
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
	return (0);

}

#include "main.h"
/**
 * main - Entry point
 *
 * Description: This programs prints an alphabet from a-z
 *
 * Return: Return always 0(successd)
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar();
	_putchar('\n');
	return (0);

}

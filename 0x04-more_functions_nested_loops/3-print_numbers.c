#include <stdio.h>

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 * Constraint - Can only use _putchar twice
 * Return: void
 */

void print_numbers(void)
{
	char n = 0;
	
	while (n <= 9)
	{
		_putchar('0' + n);
		n++;
	}
	_putchar('\n');
}

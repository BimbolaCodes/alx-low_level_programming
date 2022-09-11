#include <stdio.h>
/**
 * main - Entry point
 *
 * program prints all possible combinations of single-digit numbers
 *
 * Return: returns 0(success)
 *
 */
int main(void)
{
	int i;

	for (i = 10; i < 20; i++)
	{
		putchar((i % 10) + '0');
		if (i != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

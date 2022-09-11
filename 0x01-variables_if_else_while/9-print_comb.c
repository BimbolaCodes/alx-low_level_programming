#include <stdio.h>
/**
 *
 * main - Entry point
 *
 * return - Always retun 0
 *
 */
int main(void)
{
	int i;

	for (i = 10; i < 20; i++)
	{
		putchar((i % 10) + '0');
		if(i!=19)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	returnm (0);
}

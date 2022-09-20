#include "main.h"

/**
 * Main - a function that swap the value of two integers
 * @a: first pointer
 * @b: second pointer
 * Return void
 */

void swap_int(int *a, int *b);
{
	*a += b;
	*b = *a - *b;
	*a = *a - *b;
}

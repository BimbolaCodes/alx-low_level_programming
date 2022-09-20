#include "main.h"

/**
 * swap_int - swap the values referenced in 2 pointers
 * @a: first pointer
 * @b: second pointer
 * Return void
 */

void swap_int(int *a, int *b)
{
	int bim;

	bim = *a;
	*a = *b;
	*b = bim;
}

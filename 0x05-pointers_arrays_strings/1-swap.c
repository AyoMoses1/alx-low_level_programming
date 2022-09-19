#include "main.h"

/**
 * swap_int - swaps two integers using pointers
 * @a: first_int
 * @b: second_int
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = *x;

}

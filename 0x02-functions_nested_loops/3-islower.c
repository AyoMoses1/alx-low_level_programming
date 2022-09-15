#include "main.h"

/**
 * _islower - checks if c is lowercase.
 * @c: the int/char to check.
 *
 * Return: 1 if c is lowercase. Else 0.
 */
int _islower(int c)
{
	if (c < 123 && c > 96)
		return (1);
	else
		return (0);
}

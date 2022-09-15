#include "main.h"

/**
 * _isalpha - checks if c is lowercase.
 * @c: the int/char to check.
 *
 * Return: 1 if c is alphabetic. Else 0.
 */
int _isalpha(int c)
{
	if ((c < 123 && c > 96) || (c < 91 && c > 64))
		return (1);
	else
		return (0);
}

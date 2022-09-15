#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @a: the variable we are taking the last digit of.
 *
 * Return: value of last digit.
 */

int print_last_digit(int a)
{
	char b;

	if (a >= 0)
		b = (a % 10);
	else if (a < 0)
		b = -(a % 10);
	_putchar(b + '0');

	return (b);
}

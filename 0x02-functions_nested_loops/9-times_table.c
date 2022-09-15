#include "main.h"

/**
 * times_table - does the 9s time table
 *
 * Return: void
 */

void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			if (z < 10 && y != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			}
			else if (z >= 10 && z != 0)
			{
				_putchar(' ');
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
			else
			{
				_putchar(z + '0');
			}
			if (y < 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * times_table - multiplication table
 * This function prints time table for 9
 * Return: Always 0
 */

void times_table(void)
{
	int number, multiplier, product;

	for (number = 0; number <= 9; number++)
	{
		_putchar('0');

		for (multiplier = 1; multiplier <= 9; multiplier++)
		{
			_putchar ('.');
			_putchar (' ');

			product = number * multiplier;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}

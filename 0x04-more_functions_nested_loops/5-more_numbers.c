#include <stdio.h>
#include "main.h"

/**
 * more_numbers - This function print 10 time more of the required number
 *
 * Return: Alway 0
 */
void more_numbers(void)
{
	int t;
	int n;

	for (t = 1; t <= 10; t++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}

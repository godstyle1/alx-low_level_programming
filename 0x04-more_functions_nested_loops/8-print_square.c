#include "main.h"

/**
 * print_square - should print the funtion in form of square
 * @size: size parameter
 * Return nothing
 */
void print_square(int size)
{
	int length, bth;

	for (length = 0; length < size; length++)
	{
		for (bth = 0; bth < size; bth++)
		{
			if (bth == length)
			{
				continue;
			}
			_putchar('#');
		}
		 _putchar('#');
		if (length == (size - 1))
		{
			continue;
		}
		_putchar('\n');
	}
	_putchar('\n');
}

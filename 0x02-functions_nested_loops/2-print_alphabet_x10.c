#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * This funtion prints a-z ten times in a roll
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int c, t;

	for (t = 0; t <= 3; ++t)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

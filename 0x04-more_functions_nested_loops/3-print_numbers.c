#include "main.h"

/**
 * print_numbers - The function print digit numbers
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}

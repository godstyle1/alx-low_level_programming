#include "main.h"

/**
 * print_sign - function entry point
 * @n: function parameter or argument to print number sign
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else
		_putchar('-');
	return (-1);
}

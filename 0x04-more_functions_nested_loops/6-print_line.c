#include "main.h"

/**
 * print_line - This function will draw a line
 * @n: number of line rep.
 * Return: Alway 0
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}

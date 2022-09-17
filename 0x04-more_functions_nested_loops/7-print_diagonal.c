#include "main.h"

/**
 * print_diagonal - To print diagonal lines on terminal
 * @n: line  conitional
 * Return: nothing
 */
void print_diagonal(int n)
{
	int l, s;

	if (n > 0)
	{
	for (l = 0; l < n; l++)
	{
	for (s = 0; s < n; s++)
	{
		_putchar(' ');
	}
	_putchar('\\');

	if (l == (n - 1))
	{
		continue;
	}
		_putchar('\n');
	}
}
}

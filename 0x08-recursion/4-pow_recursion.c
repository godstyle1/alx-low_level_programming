#include "main.h"

/**
 * _pow_recursion - function that returns the power of the int.
 * @x: integer parameter one
 * @y: integer parameter two
 *
 * Return: integers numbers
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

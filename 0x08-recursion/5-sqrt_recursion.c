#include "main.h"

int real_root(int n, int i);

/**
 * _sqrt_recursion - function that returns the natural square root.
 * @n: integer parameter
 * Return: integers
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (real_root(n, 0));
}

/**
 * real_root - find the natural sqrtof a num
 * @n: integer parameter one
 * @i: integer parameter two
 * Return: integer.
 */

int real_root(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (real_root(n, i + 1));

}

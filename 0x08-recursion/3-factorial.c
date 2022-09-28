#include "main.h"

/**
 * factorial - function that returns the factorial
 * @n: integer parameter
 * Return: int.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

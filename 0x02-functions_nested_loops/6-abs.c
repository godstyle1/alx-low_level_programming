#include "main.h"

/**
 * _abs - absolute value entry point
 *
 * @c: This is the parameter with absolute value
 *
 * Return: Always 0 (Success)
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
	return (c * -1);
}

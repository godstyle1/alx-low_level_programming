#include "main.h"

/**
 * _isdigit - This function checks for a digit
 * @c: integer in digit form
 * Return: if digit 1 if not 0
 */
int _isdigit(int c)
{
	int digit = 1;

	if ((c >= 1) && (c <= 9))
	{
		return (digit);
	}
	return (0);
}

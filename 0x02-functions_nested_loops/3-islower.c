#include "main.h"
/**
 * _islower - Entry point
 *
 * This program checks alphabet for lowercase
 *
 * Return: 1 or 0 if lowercase or not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

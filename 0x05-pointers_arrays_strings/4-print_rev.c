#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - Function to print in reverse
 * *@s: string parameter
 * Return: void
 */
void print_rev(char *s)
{
	int length = strlen(s);

	while (length--)
	{
		_putchar(*(s + length));
	}
	_putchar('\n');
}

#include "main.h"
#include <string.h>

/**
 * puts_half - function that prints half string
 * *@str: character parameter
 * Return: void
 */
void puts_half(char *str)
{
	int p, length;

	length = strlen(str);

	for (p = ((length - 1) / 2) + 1; p < length; p++)
	{
		_putchar(*(str + p));
	}
	_putchar('\n');
}

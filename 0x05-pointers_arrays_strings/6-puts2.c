#include "main.h"
#include <stdio.h>

/**
 * puts2 - the function print every other character
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int p = 0;

	while (*(str + p) != '\0')
	{
		if (p % 2 == 0)
		{
			_putchar(*(str + p));
		}
		p++;
	}
	_putchar(10);
}

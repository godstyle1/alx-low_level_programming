#include "main.h"

/**
 * _puts_recursion - function that prints a string.
 * *@s: pointer to a character parameter
 *
 * Return: void.
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

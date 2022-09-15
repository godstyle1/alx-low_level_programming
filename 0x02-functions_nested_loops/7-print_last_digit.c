#include "main.h"

/**
 * print_last_digit - last digit display
 *
 * @n: This function prints last digits of an int.
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;
	_putchar(ld + '0');
	return (ld);
}

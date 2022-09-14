#include "stdio.h"

/**
 * function - print lowercase
 *
 * This is a function that prints the alphabet, in lowercase
 *
 * Return: characters
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
}

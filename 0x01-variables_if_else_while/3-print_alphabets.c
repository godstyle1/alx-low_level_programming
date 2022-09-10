#include <stdio.h>

/**
 * main - entry point
 * 
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int s;
	int c;
	
	for (s = 'a'; s <= 'z'; s++)
		putchar(s);	
	for (c = 'A'; c <= 'Z'; s++)
		putchar(c);
	putchar('\n');
	
	return (0);

}

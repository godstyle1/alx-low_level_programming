#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int d = '0';
	int a; 
	
	do
	{
		for (a = '1'; a <= '9'; a++)
		{
			putchar(d);
			putchar(a);
			putchar(',');
			putchar(' ');
		}
		d++;
	
	} while (d <= '8');
	if ((d != '8') && (a != '9'))
	{
		putchar ('\n');
	}
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int d = 0;
	int a;
	int l = 0;

	do {
		l++;
		for (a = l; a <= 9; a++)
		{
			putchar(d + '0');
			putchar(a + '0');
			if (a + d != 17)
			{
			putchar(',');
			putchar(' ');
			}
		}
		d++;
	} while (d <= 8);
	if (a + d != 17)
	{
		putchar ('\n');
	}
	return (0);
}

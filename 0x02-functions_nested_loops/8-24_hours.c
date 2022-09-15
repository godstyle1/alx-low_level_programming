#include "main.h"

/**
 * jack_bauer - Minutes of jack bauer life
 *
 * This function print every minute of jack bauer's day
 *
 * Return: Always 0
 */

void jack_bauer(void)
{
	int hrs = 0;
	int min = 0;
	int hrs_remainder;
	int min_remainder;
	
	while (hrs <= 23)
	{
	while (min <= 59)
	{
	min_remainder = min % 10;
	hrs_remainder = hrs % 10;
	_putchar(hrs / 10 + '0');
	_putchar(hrs_remainder + '0');
	_putchar(':');
	_putchar(min / 10 + '0');
	_putchar(min_remainder + '0');
	min++;
	_putchar('\n');
	}
	hrs++;
	min = 0;
	}
}

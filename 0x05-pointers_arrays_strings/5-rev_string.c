#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverses a string
 * *@s: parameter passed
 * Return: void
 */
void rev_string(char *s)
{
	int n, tmp;
	int len = strlen(s);

	for (n = 0; n < len / 2; n++)
	{
		tmp = *(s +n);
		*(s + n) = *(s + len - n - 1);
		*(s + len - n - 1) = tmp;
	}
}

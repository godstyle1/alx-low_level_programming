#include "main.h"

/**
 * _strncat - Function that concatenate strings
 * *@dest: pointer to character one
 * *@src: pointer to charater two
 * @n: integer character
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;

	while ((src[b] != '\0') && (b < n))
	{
		(dest[a] = src[b]);
		b++;
		a++;
	}
	dest[a] = '\0';

	return (dest);
}

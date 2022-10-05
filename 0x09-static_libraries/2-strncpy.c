#include "main.h"

/**
 * _strncpy - function that copies a string
 * *@dest: pointer to character one
 * *@src: pointer to character two
 * @n: integer parameter
 * Return: character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b = 0;

	while ((src[b] != '\0') && (b < n))
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}

	return (dest);
}

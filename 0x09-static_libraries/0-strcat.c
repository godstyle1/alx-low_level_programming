#include "main.h"
#include <string.h>

/**
 * _strcat - Function that concatenate two strings
 * *@dest: pointer parameter one
 * *@src: pointer parameter two
 * Return: pointer variable
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

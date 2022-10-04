#include "main.h"

/**
 * _strpbrk - function that searches for a string
 * *@s: pointer to character parameter
 * *@accept: pointer to character parameter
 * Return: pointer to byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				return (s);

			}
		}
		s++;
	}
	return (0);
}

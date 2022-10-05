#include "main.h"

/**
 * _strcmp - function that compares two strings
 * *@s1: pointer to character parameter
 * *@s2: pointer to character parameter two
 * Return: integer.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

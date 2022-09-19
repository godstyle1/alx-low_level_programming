#include "main.h"

/**
 * _strlen - function returns the length of a string
 * *@s: charater strings
 * Return: length as integer
 */
int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
	{
		length++
	}
	return (length);
}

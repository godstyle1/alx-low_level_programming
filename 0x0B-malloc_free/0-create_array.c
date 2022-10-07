#include "main.h"

/**
 * create_array - funtion that create  an arrays of char.
 * @size: unsigned int. parameter
 * @c: character type parameter.
 *
 * Return: always 0 else pointer
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}

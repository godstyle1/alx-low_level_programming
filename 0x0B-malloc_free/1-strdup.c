#include "main.h"
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * *@str: pointer to character parameter
 *
 * Return: always 0
 */
char *_strdup(char *str)
{
	int nsize = strlen(str);
	char *s;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	s = malloc((nsize + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < nsize)
	{
		s[i] = *str;
		str++;
		i++;
	}
	return (s);
}

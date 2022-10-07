#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 * *@s1: first pointer to character parameter
 * *@s2: second pointer to character parameter
 *
 * Return: always 0
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j;
	int size;

	i = j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	size = i + j + 1;

	s = malloc(size * sizeof(char));

	i = j = 0;
	if (s == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}

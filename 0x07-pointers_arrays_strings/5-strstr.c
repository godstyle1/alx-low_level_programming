#include "main.h"

/**
 * _strstr - function that locates a substring
 * *@haystack: pointer to character parameter
 * *@needle: pointer to character parameter
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *old = haystack;
		char *new = needle;

		while (*old == *new && *new != '\0')
		{
			old++;
			new++;
		}
		if (*new == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}

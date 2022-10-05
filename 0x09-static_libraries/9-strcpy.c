#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function that copies strings pointed by an integer
 * *@dest: pointer parameter one
 * *@src: pointer parameter two
 * Return: charater
 */
char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}
	*(dest + inc) = '\0';

	return (dest);
}

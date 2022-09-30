#include "main.h"
#include <stdlib.h>

/**
 * main - print its name follow by a new line
 * @argc: argument count
 * *@argv: argument strings
 * Return: 1 for error
 */
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	printf("Error");
	return (1);
}


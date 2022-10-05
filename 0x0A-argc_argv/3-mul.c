#include "main.h"
#include <stdlib.h>

/**
 * main - print its name follow by a new line
 * @argc: argument count
 * *@argv: argument strings
 * Return: 1
 */
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
		printf("Error\n");
	return (1);
}


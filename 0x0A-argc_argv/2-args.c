#include "main.h"

/**
 * main - print its name follow by a new line
 * @argc: argument count
 * *@argv: argument strings
 * Return: 0 to obtain path
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}


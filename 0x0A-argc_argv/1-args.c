#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: number of argument passed
 * @argv: vector argument that is pointer to string
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

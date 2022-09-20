#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_array - function that print n element of an array
 * *@a: pointer parameter
 * @n: integer variable
 * Return: void
 */
void print_array(int *a, int n)
{
	int arr;

	for (arr = 0; arr < n; arr++)
	{
		if (arr != n - 1)
		{
			printf("%d, ", a[arr]);
		}
		else
			printf("%d", a[arr]);
	}
		printf("\n");
}

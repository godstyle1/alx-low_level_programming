#include <stdio.h>

/**
 * main - to print fizzbuzz
 * get fizzbuzz get fiz get buzz
 * Return: nothing
 */
int main(void)
{
	int number = 0;

	for (number = 1; number <= 100; number++)
	{
		if (((number % 3) == 0) && ((number % 5) == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((number % 5) == 0)
		{
			printf("Buzz ");
		}
		else if ((number % 3) == 0)
		{
			printf("Fizz ");
		}
		else
			printf("%d ", number);
	}
	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;
	float last_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_d = n % 10;
	/* your code goes there */
	if (n == 0)
		printf("Last digit of %d is %f and is 0\n", n, last_d);
	else if (n > 5)
		printf("Last digit of %d is %f and is greater than 5\n", n, last_d);
	else
		printf("Last digit of %d is %f and is less than 6 and not 0\n", n, last_d);

	return (0);

}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 is successful, -1 if errors
 */
int main(void)
{
	int n;
	int last = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		last = -((n * -1) % 10);
	}
	else
	{
		last = n % 10;
	}
	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	else if (last < 6 && last != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	return (0);
}

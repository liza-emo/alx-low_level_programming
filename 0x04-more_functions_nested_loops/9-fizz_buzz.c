#include "main.h"
#include <stdio.h>
/**
 * main - Prints buzz each of 3 and 5
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz ");
		else if (num % 3 == 0 && num % 5 != 0)
			printf("Fizz ");
		else if (num % 3 != 0 && num % 5 == 0)
			printf("Buzz ");
		else if (num == 1)
			printf("%d ", num);
		else if (num == 100)
			printf("%d\n", num);
		else
			printf("%d ", num);
	}
	return (0);
}

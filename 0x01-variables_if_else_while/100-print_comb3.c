#include <stdio.h>
#include <string.h>

/**
  *main - print all possible two-digit combinations
  *
  *Return 0 (successful)
  */

int main (void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 *
 * Return: 0 if successful, -1 if errors
*/
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; ++alp)
	{
		if (alp == 'q' || alp == 'e')
		{
			continue;
		}
		putchar(alp);
	}
	putchar('\n');
	return (0);
}

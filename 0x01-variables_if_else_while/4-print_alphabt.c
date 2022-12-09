#include <stdio.h>
#include <string.h>

/**
 *main - print alphabet except e and q
 *return 0
 */
int main(void)
{
	char alp;
	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp == 'e' || alp == 'q')
		{
			continue;
		}
		putchar(alp);
	}
	putchar(\n);
	return 0;
}

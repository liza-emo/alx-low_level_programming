#include "main.h"
#include <stdio.h>

/**
  *main - prints _putchar, followed by a new line.
  *
  *Return: 0(Success)
  */
int main(void)
{
	char myStr[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(myStr[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

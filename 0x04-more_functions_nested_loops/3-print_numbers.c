#include "main.h"

/**
 * print_numbers - prints numbers 0 - 9
 *
 * Return: null
 */
void print_numbers(void)
{
int counter;
for (counter = 0; counter < 10; counter++)
{
_putchar(counter + '0');
}
_putchar('\n');
return;
}

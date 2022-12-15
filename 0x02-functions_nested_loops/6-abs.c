#include "main.h"

/**
 *_abs - Entry point
 *@n is an integer
 *Description: prints the absolute vaue of an integer
 *Return: integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}

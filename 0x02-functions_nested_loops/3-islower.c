#include "main.h"

/**
  *_islower - checks for lowercase character
  *
  *Return: 1 if lowercase, 0 otherwise
  */
int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		/* refer int c*/
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}

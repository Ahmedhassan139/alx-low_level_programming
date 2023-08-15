#include "main.h"

/**
 *_abs - function to print lower case
 *@c: the charachter checked
 *Return: 1 for lowercase or 0 for uppercase or -1 for dkflm
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}

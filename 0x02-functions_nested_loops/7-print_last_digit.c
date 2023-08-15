#include "main.h"

/**
 *print_last_digit - function to print lower case
 *@n: the charachter checked
 *Return: 1 for lowercase or 0 for uppercase or -1 for dkflm
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}

#include "main.h"

/**
 *print_sign - function to print lower case
 *@i: the charachter checked
 *Return: 1 for lowercase or 0 for uppercase or -1 for dkflm
 */

int print_sign(int i)
{
	if (i>0)
	{
		_putchar(43);
		return (1);
	}
	else if (i < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
		       
}

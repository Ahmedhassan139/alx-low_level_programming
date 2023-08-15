#include "main.h"
/**
 *print_alphabet is function to print lower case
 *void function doesnt return anything
 */
void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

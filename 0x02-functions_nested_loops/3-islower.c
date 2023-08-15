#include "main.h"
/**
 *_islower - function to print lower case
 *@c: the charachter checked
 *Return: 1 for lowercase or 0 for uppercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	return (0);
}

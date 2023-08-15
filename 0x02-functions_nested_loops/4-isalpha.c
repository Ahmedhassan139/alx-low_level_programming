#include "main.h"
/**
 *_isalpha - function to print lower case
 *@c: the charachter checked
 *Return: 1 for lowercase or 0 for uppercase
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (1);
	}
	else
	return (0);
}

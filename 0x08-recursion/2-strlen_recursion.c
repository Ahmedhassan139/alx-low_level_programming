#include "main.h"
/**
 * _strlen_recursion - function that returns the l
 * @s: parameter for checkin
 * Return: Alw
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}

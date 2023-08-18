#include "main.h"
#include <stdio.h>

/**
 *print_triangle - function build triangle
 *return: void and print triangle
 *@size: the size of the triangle
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			_putchar(' ');
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
		else
		{
			_putchar('\n');
		}
	}

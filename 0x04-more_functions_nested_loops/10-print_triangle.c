#include "main.h"
#include <stdio.h>

void print_triangle(int size)
{

	
	if (size > 0)
	{
		for (int i =1; i < size; i++)
		{
			for (int j =1; j < i; j++)
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

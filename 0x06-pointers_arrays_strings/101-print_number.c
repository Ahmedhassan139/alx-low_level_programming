#include "main.h"
#include <stdio.h>

/**
 *print_number -kmllflv,l
 *@n: kflvekrflre
 *return:kmfmvflfv
 */

void print_number(int n)
{
	int i;

	char str[10];

	sprintf(str, "%d", n);

	for (i = 0; i < 10; i++)
	{
		_putchar(str[i]);
	}
}


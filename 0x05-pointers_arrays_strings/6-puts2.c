#include "main.h"

/**
 *puts2 - jfkemf
 *return:fjnfv
 *@str: kfmlef
 */

void puts2(char *str)
{
	int c;
	char l;

	for (c = 0; str[c] != 0; c++)
	{
		if (c % 2 == 0)
		{
			l = str[c];
			_putchar(l);
		}
	}
	_putchar('\n');
}

#include <stdio.h>
/**
 *reverse_array - hjbjkdcmd
 *@a:nkcmc
 *@n:nnkvlf
 *Return:m;ldlv
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		if (i != n - 1)
		{
		printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}

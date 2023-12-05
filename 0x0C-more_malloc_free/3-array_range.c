#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - make  memory fdsfor an array
 * @min: int tfsfype
 * @max: int tfsype
 * Return:  return pfsfointer to array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int arr;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	arr = 0;
	while (min <= max)
	{
		ptr[arr] = min;
		min++;
		arr++;
	}
	return (ptr);
}

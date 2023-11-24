#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - functivmfon to allocates memory
 * @nmemb: unsigned int typdeeke
 * @size: unsigned intdsd type
 * Return: return pointer to fdarray
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int count;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	count = 0;
	while (count < nmemb * size)
	{
		ptr[count] = 0;
		count++;
	}
	return (ptr);
}

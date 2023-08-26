#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *rot13 -jndm
 *@src:lcffvf
 *Return:mfmv,f;v.
*/

char *rot13(const char *src)
{
	char *current_char;

	char *result;

	result = malloc(strlen(src));

	if (result != NULL)
	{
		strcpy(result, src);

		current_char = result;

		while (*current_char != '\0')
		{
			if ((*current_char >= 97 && *current_char <= 122) ||
			    (*current_char >= 65 && *current_char <= 90))
			{
				if (*current_char > 109 || (*current_char > 77 && *current_char < 91))
				{
					*current_char -= 13;

				}
				else
				{
					*current_char += 13;
				}
			}
			current_char++;
		}
	}
	return (result);
}

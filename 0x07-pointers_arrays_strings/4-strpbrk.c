/**
 *_strpbrk - hfjksa
 *@s: jfnsf
 *@accept: mdlf,
 *Return: mkvfvf
 */


char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
		j = 0;
		i++;
	}
	return (0);
}

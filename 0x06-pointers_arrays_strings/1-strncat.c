/**
 *_strncat -kkmvf
 *Return: klmvfs
 *@dest: jkvfl
 *@src:nvfnvl;b
 *@n:nvkfmv
 */


char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	return (dest);
}

/**
 *_memcpy - jfkmkf
 *@dest:mvfv
 *@src: mkfkfk
 *@n:fkmvlf,v
 *return:mfkvlf,v
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

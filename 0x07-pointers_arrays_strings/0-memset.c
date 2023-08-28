/**
 *_memset -jfmlkv,vf
 *@s: array of char
 *@b: kmfkrfl,f
 *@n:kmfkeofk
 *Return:kmclkfv,f
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}

	return (s);
}

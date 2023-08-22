/**
 *rev_string -jkbjvfks
 *return: jnms
 *@s:iufnkf
 */
void rev_string(char *s)
{
	int l, r_s;
	char character;

	for (l = '\0'; s[l] != 0; l++)
	{
	}
	r_s = 0;
	for (l = l - 1; r_s < l; r_s++)
	{
		character = s[l];
		s[l] = s[r_s];
		s[r_s] = character;
		l--;
	}
}

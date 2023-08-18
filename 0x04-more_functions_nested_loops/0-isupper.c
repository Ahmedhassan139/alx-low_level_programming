/**
 *_isupper - show if the letter is upper or lower case
 *@c: the char to be checked
 *Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}

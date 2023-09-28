/**
 * factorial - returns thorial of the number
 * @n: the max al
 * Return: fl of number n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
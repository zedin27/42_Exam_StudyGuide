/*int		is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	if (n >= 1)
	{
		if (n % 2 != 0)
			return (0);
		n /= 2;
	}
	return (1);
}
*/

int		is_power_of_2(unsigned int n)
{
	return ((n & (n - 1)) == 0);
}

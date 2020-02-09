int         is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	else
		return !(n & (n - 1));
	/*if ((n & (n - 1)) == 0)
		return (1);
	else
		return (0);
	*/
}

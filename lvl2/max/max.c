int		max(int *tab, unsigned int len)
{
	if (len == 0)
		return (0);

	int max;
	unsigned int i;

	max = tab[0];
	i = 0;
	while (len > i)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (0);
}

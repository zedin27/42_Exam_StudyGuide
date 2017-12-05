#include <unistd.h>

int		max(int *tab, unsigned int len)
{
	int max;

	max = 0;
	while (tab[len])
	{
		len--;
		if (len == -1)
			return (max);
		if (max < tab[len])
			max = tab[len];
	}
	return (0);
}

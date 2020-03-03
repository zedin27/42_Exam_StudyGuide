int		max(int* tab, unsigned int len)
{
	if (len == 0)
		return (0);
	unsigned int i;
	int max;

	i = 0;
	max = tab[i];
	while (len > i)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

#ifdef TEST
#include <stdio.h>

int		main(void)
{
	int arr[] = {0, 10, 20, -1, -5};

	printf("%d\n", max(arr, ((sizeof(arr)/(sizeof(arr[1]))))));
	return (0);
}

#endif

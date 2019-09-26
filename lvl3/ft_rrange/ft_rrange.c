#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int *vals;
	int i;

	i = 0;
	if (start > end)
		vals = malloc(sizeof(int) * (start - end) + 1);
	else
		vals = malloc(sizeof(int) * (end - start) + 1);
	while (start != end)
	{
		vals[i++] = end;
		end += (start > end) ? 1 : -1;
	}

	vals[i] = end;
	return (vals);
}

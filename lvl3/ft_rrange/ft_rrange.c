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

#ifdef TEST

#include <stdio.h>

int		main(void)
{
	int start = 0;
	int end = -3;

	int *arr = ft_rrange(start, end);

	int i = 0;
	while (i < 4)
	{
		printf("%d, ", arr[i]);
		++i;
	}
	printf("\n");
}

#endif

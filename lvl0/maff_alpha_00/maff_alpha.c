#include <unistd.h>

int		main(void)
{
	char	low;
	char	high;
	int		i;

	i = 0;
	low = 'a';
	high = 'B';
	while (i < 13)
	{
		write(1, &low, 1);
		write(1, &high, 1);
		low += 2;
		high += 2;
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

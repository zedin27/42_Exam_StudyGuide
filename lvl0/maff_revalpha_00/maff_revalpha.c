#include <unistd.h>

int		main(void)
{
	char high;
	char low;
	int i;

	i = 0;
	high = 'Y';
	low = 'z';
	while (i < 13)
	{
		write(1, &low, 1);
		write(1, &high, 1);
		low -= 2;
		high -= 2;
		i++;
	}
	write(1, "\n", 1);
}

#include <unistd.h>

int		ft_atoi(char *str)
{
	int res;
	int i;

	i = 0;
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res);
}

void	print_hex(int num)
{
	char hex[] = "0123456789abcdef";

	if (num > 16)
		print_hex(num / 16);
	write(1, &hex[num % 16], 1);
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}

#include <unistd.h>

void	ft_putnbr(int num)
{
	char c;

	if (num >= 10)
		ft_putnbr(num / 10);
	c = (num % 10) + '0';
	write(1, &c, 1);
}

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

void	tab_mult(int num)
{
	int res;

	for (int i = 1; i <= 9; i++)
	{
		res = i * num;
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(num);
		write(1, " = ", 3);
		ft_putnbr(res);
		write(1, "\n", 1);
		// printf("%d x %d = %d\n", i, num, res);
	}
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
		tab_mult(ft_atoi(argv[1]));
	else
		write(1, "\n", 1);
	return (0);
}

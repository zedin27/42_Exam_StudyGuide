#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int num)
{
	char c;

	if (num >= 10)
		ft_putnbr(num / 10);
	c = (num % 10) + '0';
	write(1, &c, 1);
}

int		ft_isspace(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int		ft_atoi(const char *str)
{
	int sign;
	int num;
	int res;
	int i;

	sign = 1;
	res = 0;
	i = 0;

	if (str[i] == '\0')
		return (0);
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (ft_isspace(str[i]) || (str[i] >= ' ' && str[i] <= '~'))
	{
		if (str[i] == '+' || str[i] == '-')
			i++;
		else
			break ;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		num = str[i] - '0';
		res += num;
		i++;
	}
	return (res * sign);
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

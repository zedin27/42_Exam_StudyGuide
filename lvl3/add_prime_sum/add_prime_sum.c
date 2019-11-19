#include <unistd.h>

void	ft_putnbr(int num)
{
	char c;

	if (num >= 10)
		ft_putnbr(num / 10);
	c = (num % 10) + '0';
	write(1, &c, 1);
}

int		ft_atoi(const char *str)
{
	int num;

	num = 0;
	while (*str >= '0' && *str <= '9')
	{
		num *= 10;
		num += *str - '0';
		str++;
	}
	return (num);
}

int		is_prime(int num)
{
	int i;

	i = 2;
	while (num > i)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		add_prime_sum(int num)
{
	int sum;
	int i;

	sum = 0;
	i = 2;
	while (num >= i)
	{
		if (is_prime(i) == 1)
			sum += i;
		i++;
	}
	return (sum);
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
		ft_putnbr(add_prime_sum(ft_atoi(argv[1])));
	else
		ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}

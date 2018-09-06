/*
Write a program that displays a number's multiplication table.

The parameter will always be a strictly positive number that fits in an int,
and said number times 9 will also fit in an int.

If there are no parameters, the program displays \n.

Examples:

$>./tab_mult 9
1 x 9 = 9
2 x 9 = 18
3 x 9 = 27
4 x 9 = 36
5 x 9 = 45
6 x 9 = 54
7 x 9 = 63
8 x 9 = 72
9 x 9 = 81
$>./tab_mult 19
1 x 19 = 19
2 x 19 = 38
3 x 19 = 57
4 x 19 = 76
5 x 19 = 95
6 x 19 = 114
7 x 19 = 133
8 x 19 = 152
9 x 19 = 171
$>
$>./tab_mult | cat -e
$
$>
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//FAIL: NO NEWLINE ADDED (lol)

int		ft_isspace(char c)
{
	if (c == '\t' || c == '\v' || c == '\n' || c == ' ' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	if (*str)
		write(1, str++, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
		ft_putstr("-2147483648");
	else if (nbr < 0)
	{
		ft_putstr("-");
		ft_putnbr(-nbr);
	}
	else if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}

int		ft_atoi(const char *str)
{
	int sign;
	int res;
	int i;

	sign = 1;
	res = 0;
	i = 0;
	if (str == NULL)
		return (0);
	if (ft_isspace(str[i]))
		i++;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}

int		main(int argc, char *argv[])
{
	int input;
	int res;
	int i;
	// char *test;
	// int test;
	i = 0;
	res = 0;
	if (argc == 2)
	{
		input = ft_atoi(&argv[1][0]);
		while (++i < 10)
		{
			//test = i + 48;
			res = i * input;
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(input);
			write(1, " = ", 3);
			ft_putnbr(res);
			write(1, "\n", 1);
			// printf("%i x %d = %d\n", i, input, res);
		}
	}
	return (0);
}

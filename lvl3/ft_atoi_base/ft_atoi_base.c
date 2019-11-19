#include <stdio.h>
int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

int		get_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else
		return (-1);

}

int		ft_atoi_base(const char *str, int base)
{
	int res;
	int sign;
	int digit;

	res = 0;
	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while ((digit = get_digit(ft_tolower(*str))) >= 0)
	{
		res *= base;
		res += digit * sign;
		str++;
	}
	return (res);
}

#ifdef TEST
int	main(void)
{
	char test[] = "255";
	int	base = 16;
	printf("test: %s\nreal: %d\n", test, ft_atoi_base(test, base));
}
#endif

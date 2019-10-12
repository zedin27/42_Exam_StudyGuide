#include <stdlib.h>

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

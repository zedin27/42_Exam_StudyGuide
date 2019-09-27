#include <stdio.h>
#include <stdlib.h>

//FAIL: NO NEWLINE ADDED (lol)

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
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}


/*
int		ft_iswhitespace(char c)
{
	if (c == '\t' || c == '\v' || c == '\n' || c == ' ' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int		ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		ft_atoi(const char *str)
{
	int sign;
	int res;
	int i;

	sign = 1;
	res = 0;
	i = 0;

	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}

	return (res * sign);
}
*/

#include <unistd.h>

int		ft_atoi(const char *str)
{
	int i;
	int sign;
	int res;

	sign = 1;
	i = 0;
	res = 0;

	//FAIL: check when the string is NULL too!
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

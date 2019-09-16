#include <unistd.h>

int		ft_isspace(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void	expand_str(char *str)
{
	int i;
	int flag;

	i = 0;
	flag = 0;
	while (ft_isspace(str[i]))
		i++;
	while (str[i])
	{
		if (ft_isspace(str[i]))
			flag = 1;
		else
		{
			if (flag)
				write(1, "   ", 3);
			flag = 0;
			write(1, &str[i], 1);
		}
		i++;
	}
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
		expand_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}

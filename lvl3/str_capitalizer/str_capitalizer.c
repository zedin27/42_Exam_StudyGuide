#include <unistd.h>

int		ft_isspace(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (0);
}

int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

int		ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

void	str_capitalizer(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		while (str[i] && ft_isspace(str[i]))
		{
			write(1, &str[i], 1);
			i++;
		}
		if (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			write(1, &str[i], 1);
			i++;
		}
		while (str[i] && !ft_isspace(str[i]))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, &str[i], 1);
}

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc == 1)
		write(1, "\n", 1);
	else
	{
		while (i < argc)
		{
			if (argc > 1)
				str_capitalizer(argv[i]);
			i++;
		}
	}
	return (0);
}

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
			write(1, &str[i++], 1);
		if (ft_islower(str[i]))
		{
			str[i] -= ('a' - 'A');
			write(1, &str[i], 1);
			i++;
		}
		while (str[i] && ft_isspace(str[i]))
		{
			if (ft_isupper(str[i]))
			{
				str[i] += ('a' - 'A');
				write(1, &str[i], 1);
				i++;
			}
		}
	}
}

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc >= 2)
	{
		while (i < argc)
		{
			str_capitalizer(argv[i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

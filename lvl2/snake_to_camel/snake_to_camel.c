#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	snake_to_camel(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '_')
			str[i + 1] = ft_toupper(str[i + 1]);
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
		snake_to_camel(argv[1]);
	ft_putchar('\n');
	return (0);
}

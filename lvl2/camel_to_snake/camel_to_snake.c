#include <unistd.h>

int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	camel_to_snake(char *str)
{
	int i;
	i = -1;

	while (str[++i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			ft_putchar('_');
			ft_putchar(ft_tolower(str[i]));
			continue ;
		}
		ft_putchar(str[i]);
	}
	return ;
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
		camel_to_snake(argv[1]);
	ft_putchar('\n');
	return (0);
}

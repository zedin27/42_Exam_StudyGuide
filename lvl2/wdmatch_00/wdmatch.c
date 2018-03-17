#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;

	if (argc == 3)
	{
		while (argv[2] != '\0')
		{
			if (argv[1] != '\0')
			{
				ft_putstr(argv[1]);
				ft_putchar('\n');
				return (0);
			}
			if (argv[2] == argv[1])
				j++;
			i++;
		}
		if (argv[1] != '\0')
			ft_putstr(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}

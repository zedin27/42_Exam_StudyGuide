#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	repeat_alpha(char *str)
{
	int i;
	char c;

	i = 0;
	while (str[i])
	{
		c = 0;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			c = str[i] - 95;
			while (--c)
				ft_putchar(str[i]);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			c = str[i] - 63;
			while (--c)
				ft_putchar(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}

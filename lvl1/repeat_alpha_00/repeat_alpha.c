#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str) //No need
{
	while (*str)
		write(1, str++, 1);
}

void	repeat_alpha(char *str)
{
	int i;
	char letter;

	i = 0;
	while (str[i])
	{
		letter = 0;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			letter = str[i] - 95;
			while (--letter)
				write(1, &str[i], 1);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			letter = str[i] - 63;
			while (--letter)
				write(1, &str[i], 1);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char *argv[])
{
	if (argc != 2)
	{
		// ft_putstr("not enough argument"); //FAIL
		ft_putchar('\n');
		return (0);
	}
	else
		repeat_alpha(argv[1]);
	ft_putchar('\n');
}

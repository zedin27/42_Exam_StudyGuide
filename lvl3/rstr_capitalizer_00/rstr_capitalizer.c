#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char *av[])
{
	int i;
	int j;

	i = 1;
	j = 0;
	if (ac >= 2)
	{
		while (av[i])
		{
			j = 0;
			while(av[i][j])
			{
				if (av[i][j] >= 'A' && av[i][j] <= 'Z')
				{
					if (av[i][j+1] != '\t' && av[i][j+1] != ' ' && av[i][j+1] != '\0')
						ft_putchar(av[i][j] + 32);
					else
						ft_putchar(av[i][j]);
				}
				else if (av[i][j] >= 'a' && av[i][j] <= 'z')
				{
					if (av[i][j+1] == '\t' || av[i][j+1] == ' ' || av[i][j+1] == '\0')
						ft_putchar(av[i][j] - 32);
					else
						ft_putchar(av[i][j]);
				}
				else
					ft_putchar(av[i][j]);
				j++;
			}
			i++;
			ft_putchar('\n');
		}
	}
		ft_putchar('\n');
	return (0);
}

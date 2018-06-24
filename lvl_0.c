#include <unistd.h>
#include <stdio.h>

#define ERROR -1

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
 	while (str[i] != '\0')
		write(1, &str[i++], 1);
}

void 	ft_revstr(char *str)
{
	if (*str)
	{
		ft_revstr(str + 1);
		ft_putchar(*str);
	}
	return ;
}

int		main(int argc, char *argv[])
{
	/* aff_a
	int i;
	//(void)argc;
	//(void)**argv;

	i = 0;
	if (argc != 2)
	{
		ft_putstr("a\n");
		return (0);
	}
	else
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'a')
				{
					ft_putstr("a");
					break ;
				}
				i++;
		}
		ft_putchar('\n');
	}
	//ft_putstr("hello world\n");
	return (0);
	*/

	/* aff_first_param
	if (argc > 1)
		ft_putstr(argv[1]);
	else if (argc < 1)
	{
		return (0);
		ft_putstr("\n");
	}
	ft_putstr("\n");
	return (0);
	*/

	/* ft_revstr */
	int i;

	i = 0;
	if (argc != 2)
		ft_putchar('\n');
	else
	{
		if (argv[1][i] != '\0')
		{
			ft_revstr(&argv[1][i]);
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}

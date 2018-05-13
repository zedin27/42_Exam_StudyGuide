#include <unistd.h>

void 	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		write(1, &str[i], 1);
}

int		main(int argc, char *argv[])
{
	if (argc < 2)
	/*if (argc > 1) <---- REFACTORED
		ft_putstr(argv[argc - 1]);
	else if (argc < 1)
	{
		ft_putstr("\n");
		return (0);
	}*/
	{
		ft_putstr("\n");
		return (0);
	}
	ft_putstr(argv[argc - 1]);
	return (0);

}

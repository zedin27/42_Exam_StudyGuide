#include <unistd.h>

int		ft_iswhitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\v' || c == '\n' || c == '\f')
		return (1);
	return (0);
}

int		main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (ft_iswhitespace(argv[1][i]))
			i++;
		while (!(ft_iswhitespace(argv[1][i]) && argv[1][i]))
			write(1, &argv[1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}

#include <unistd.h>

int		is_whitespace(char c)
{
	if (c == '\t' || c == '\v' || c == '\n' || c == ' ')
		return (1);
	return (0);
}

int		main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (is_whitespace(argv[1][i]))
			i++;
		while (argv[1][i] && !(is_whitespace(argv[1][i])))
			write(1, &argv[1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}

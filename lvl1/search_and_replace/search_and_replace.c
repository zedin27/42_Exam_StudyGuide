#include <unistd.h>

void	search_and_replace(char *str, char *search, char *replace)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (search[j + 1] || replace[j + 1])
			break ;
		if (str[i] == *search)
			str[i] = *replace;
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int argc, char *argv[])
{
	if (argc == 4)
		search_and_replace(argv[1], argv[2], argv[3]);
	write(1, "\n", 1);
	return (0);
}

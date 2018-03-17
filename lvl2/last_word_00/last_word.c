/* FAIL */

#include <unistd.h>

void	last_word(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' && str[i + 1] >= '!' && str[i + 1] <= '~') //<--- Missed '\127'
			j = i + 1;
		i++;
	}
	while (str[j] >= '!' && str[j] <= '~')
	{
		write(1, &str[j], 1);
		j++;
	}
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
		last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}

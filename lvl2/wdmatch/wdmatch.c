#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

void	wdmatch(char *str1, char *str2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str2[j] != '\0')
		if (str1[i] == str2[j++])
			i++;
	if (!str1[i])
		ft_putstr(str1);
}

int main(int argc, char *argv[])
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}

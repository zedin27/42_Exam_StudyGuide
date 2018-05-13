#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ulstr(char *str)
{
	char	letter;
	int		i;

	i = -1;
	while (str[++i] != '\0')
	{
		letter = str[i];
		if(letter >= 'a' && letter <= 'z')
		{
			letter -= 32;
			ft_putchar(letter);
		}
		if(letter >= 'A' && letter <= 'Z')
		{
			letter += 32;
			ft_putchar(letter);
		}
	}
	ft_putchar('\n');
}

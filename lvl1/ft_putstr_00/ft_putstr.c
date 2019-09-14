#include <unistd.h>

//NOT PASSABLE

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int len;

	len = -1;
	while (str[len++] != '\0')
		ft_putchar(str[len]);
}

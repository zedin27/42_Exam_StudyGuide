#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

#ifdef TEST

int		main(void)
{
	ft_putstr("hello world");
	return (0);
}

#endif

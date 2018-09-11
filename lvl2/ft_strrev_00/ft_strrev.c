/* FAIL  - DON'T USE FORBIDDEN FUNCTIONS*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strrev(char *str)
{
	if (*str)
	{
		ft_strrev(str + 1);
		ft_putchar(*str);
	}
	return (str);
}

/*int		main(void)
{
	char *str = "hello";
	ft_strrev(str);
}*/

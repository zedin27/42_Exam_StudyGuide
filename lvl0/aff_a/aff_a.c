#include <unistd.h>

void	aff_a(char *str)
{
	while (*str)
	{
		if (*str == 'a')
		{
			write(1, "a\n", 2);
			return ;
		}
		str++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char *argv[])
{

	if (argc == 2)
		aff_a(argv[1]);
	else
		write(1, "a\n", 2);
	return (0);
}

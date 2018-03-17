#include <unistd.h>
#include <stdio.h>

int		ft_whitespace(char c)
{
	// if (c == '\t' || c =='\v' || c == '\n' || c == '\f' || c == ' ')
	// 	return (1);
	// return (0);
	return (c == '\t' ? 1 : (c == '\v' ? 1 : (c == '\n' ? 1 : (c == '\f' ? 1 : (c == ' ' ? 1 : 0)))));
}

/*int main(void)
{
	char *str = "big momma is comming	";
	int i = -1;

	while (str[++i])
	{
		if (ft_whitespace(str[i]))
		{
			printf("there are whitespaces boiz\n");
			break ;
		}
		else
			printf("there are no white space\n");
	}
}*/

int		main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (ft_whitespace(argv[1][i]))
			i++;
		while (!(ft_whitespace(argv[1][i]) && argv[1][i]))
			write(1, &argv[1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}

/* v First attempt/test v */

// #include <unistd.h>
// #include <stdio.h>
//
// int		ft_whitespace(char c)
// {
// 	return (c == '\t' ? 1 : (c == '\v' ? 1 : (c == '\n' ? 1 : (c == '\f' ? 1 : (c == ' ' ? 1 : 0)))));
// }
//
// /*int main(void)
// {
// 	char *str = "big momma is comming	";
// 	int i = -1;
//
// 	while (str[++i])
// 	{
// 		if (ft_whitespace(str[i]))
// 		{
// 			printf("there are whitespaces boiz\n");
// 			break ;
// 		}
// 		else
// 			printf("there are no white space\n");
// 	}
// }*/
//
// int		main(int argc, char *argv[])
// {
// 	int i;
//
// 	i = 0;
// 	if (argc != 2)
// 		write(1, "\n", 1);
// 	else
// 	{
// 		while (ft_whitespace(argv[1][i]))
// 			i++;
// 		while (!(ft_whitespace(argv[1][i]) && argv[1][i]))
// 			write(1, &argv[1][i++], 1);
// 	}
// 	return (0);
// }

#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char *argv[])
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			printf("%d", (atoi(&argv[1][0]) + atoi(&argv[3][0])));
		if (argv[2][0] == '/')
			printf("%d", (atoi(&argv[1][0]) / atoi(&argv[3][0])));
		if (argv[2][0] == '*')
			printf("%d", (atoi(&argv[1][0]) * atoi(&argv[3][0])));
		if (argv[2][0] == '-')
			printf("%d", (atoi(&argv[1][0]) - atoi(&argv[3][0])));
		if (argv[2][0] == '%')
			printf("%d", (atoi(&argv[1][0]) % atoi(&argv[3][0])));
	}
	printf("\n");
	return (0);
}

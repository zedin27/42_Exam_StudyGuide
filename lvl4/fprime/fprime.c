#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	fprime(int num)
{
	int f;
	int n;
	int flag;

	f = 2;
	n = num;
	flag = 1;
	if (n == 1)
		printf("1");
	while (n >= f)
	{
		if (n % f == 0)
		{
			if (flag)
				printf("%d", f);
			else
				printf("*%d", f);
			flag = 0;
			n /= f;
		}
		else
			f += 1;
	}
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
		fprime(atoi(argv[1]));
	printf("\n");
	return (0);
}

#define MEM 2048
#define SRC_SIZE 4096

#include <stdlib.h>
#include <unistd.h>
char	*bf(void)
{
	int i;
	char *bf;

	i = -1;
	bf = malloc(sizeof(char) * MEM + 1);
	while (++i < MEM)
		bf[i] = 0;
	bf[i] = '\0';
	return (bf);
}

void	fuckme(char *str)
{
	char bfk[2049] = { [0 ... 2048] = 0};
	int bfi;

	int i;
	int checker;

	i = 0;
	bfi = 0;
		while (*str)
		{
			switch (*str)
			{
				case '>':
					++bfi; break;
				case '<':
					--bfi; break;
				case '+':
					++bfk[bfi]; break;
				case '-':
					--bfk[bfi]; break;
				case '.':
					write(1, &bfk[bfi], 1); break;
				case '[':
					if (!bfk[bfi])
					{
						checker = 1;
						while (checker != 0)
						{
							str++;
							if (*str == '[')
								checker++;
							if (*str == ']')
								checker--;
						}
					}
					break;
				case ']':
					checker = 1;
					while (checker)
					{
						str--;
						if (*str == '[')
							checker--;
						if (*str == ']')
							checker++;
					}
					str--;
					break;
			}
			str++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		fuckme(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}

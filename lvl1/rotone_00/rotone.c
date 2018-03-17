#include <unistd.h>

void	rotone(char *str)
{
	int letter;

	letter = 0;
	while (str[letter])
	{
		if (str[letter] >= 'a' && str[letter] <= 'y')
			str[letter] += 1;
		else if (str[letter] >= 'A' && str[letter] <= 'Y')
			str[letter] += 1;
		else if (str[letter] == 'Z')
			str[letter] = 'A';
		else if (str[letter] == 'z')
			str[letter] = 'a';
		write(1, &str[letter], 1);
		letter++;
	}
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
		rotone(argv[1]);
	write(1, "\n", 1);
	return (0);
}

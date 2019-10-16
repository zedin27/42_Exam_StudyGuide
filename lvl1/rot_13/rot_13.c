#include <unistd.h>

void	rot_13(char *str)
{
	int c;

	c = 0;
	while (str[c])
	{
		if ((str[c] >= 'a' && str[c] <= 'm') || (str[c] >= 'A' && str[c] <= 'M'))
			str[c] += 13;
		else if ((str[c] > 'm' && str[c] <= 'z') || (str[c] > 'M' && str[c] <= 'Z'))
			str[c] -= 13;
		write(1, &str[c], 1);
		c++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		rot_13(argv[1]);
	write(1, "\n", 1);
	return (0);
}

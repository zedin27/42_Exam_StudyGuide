#include <unistd.h>

void	alpha_mirror(char *str)
{
	int i;
	char *reverse_low;
	char *reverse_high;

	reverse_low = "zyxwvutsrqponmlkjihgfedcba";
	reverse_high = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = reverse_low[str[i] - 'a'];
		else if (str[i] >= 'A' && str[i] <= 'Y') //FAIL: forgot to change my 'Y' into 'Z' roflmao
			str[i] = reverse_high[str[i] - 'A'];
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		alpha_mirror(argv[1]);
	write(1, "\n", 1);
	return (0);
}

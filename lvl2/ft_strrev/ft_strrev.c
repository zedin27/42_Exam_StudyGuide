#include <unistd.h>

void	reverse(char *begin, char *end)
{
	char temp;

	while (begin < end)
	{
		temp = *begin;
		*begin++ = *end;
		*end-- = temp;
	}
}

void	ft_strrev(char *str)
{
	char *begin;
	char *end;
	char *temp;

	temp = str;
	begin = str;
	end = str - 1;

	while (*temp)
	{
		temp++;
		if (*temp == '\0')
			reverse(begin, temp - 1);
		else if (*temp == ' ')
		{
			reverse(begin, temp - 1);
			begin = temp + 1;
		}
	}
	reverse(str, temp - 1);
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		ft_strrev(argv[1]);
	write(1, "\n", 1);
	return (0);
}

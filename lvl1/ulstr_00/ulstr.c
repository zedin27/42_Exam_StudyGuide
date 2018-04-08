#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

void 	ulstr(char *str)
{
	int i;
	char letter;

	i = -1;
	while (str[++i] != '\0')
	{
		letter = str[i];
		if (letter >= 'A' && letter <= 'Z')
		{
			letter += 32;
			ft_putchar(letter);
		}
		if (letter >= 'a' && letter <= 'z')
		{
			letter -= 32;
			ft_putchar(letter);
		}
	}
	ft_putchar('\n');
}


//I DONT HAVE A COMPILER ATM. But, I can call the function to flip the str
int main(void)
{
  char *str;

  str = "HelloAsdfFFFx00\n";
  printf("Before reverse: %s", str);
  printf("After reverse:\n");
  ulstr(str);
}

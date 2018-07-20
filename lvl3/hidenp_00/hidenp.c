#include <unistd.h>
#include <stdio.h>

//FAIL

/*
** find s1 (secret string) from s2 (source string)
*/

int			ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s2[j] && (s1[i] == s2[j]))
	{
		i++;
		j++;
	}
	return (i - j);
}

int		hidenp(char *s1, char *s2)
{
	char	found[4242];
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s2[i] != '\0')
	{
		if (s1[j] == s2[i])
		{
			found[j] = s1[j];
			j++;
		}
		i++;
	}
	if (!(ft_strcmp(s1, found)))
		write(1, "1", 1);
	else
		write(1, "0", 1);
	return (0);
}

int		main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;

	char *str1 = "abc";
	char *str2 = "halbc";
	hidenp(str1, str2);
	printf("\n");
}

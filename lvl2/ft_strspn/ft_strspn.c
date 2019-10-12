#include <string.h>
#include <stdio.h>

char	*find_char(const char *str, int c)
{
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	return (0);
}

size_t		ft_strspn(const char *s, const char *charset)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (find_char(charset, s[i]) == 0)
			break ;
		i++;
	}
	return (i);
}


#ifdef TEST

int	main(void)
{
	char haystack[] = "lorem ipsum lol idk the rest";
	char needle[] = "lorm";

	printf("ft: %zu\n", ft_strspn(haystack, needle));
	printf("real: %zu\n", strspn(haystack, needle));
}

#endif

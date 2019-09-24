#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	find_char(const char c, const char *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char	*ft_strpbrk(const char *str, const char *charset)
{
	while (*str)
	{
		if (find_char(*str, charset) == 1)
			return ((char*)str);
		str++;
	}
	return (0);
}

#ifdef TEST
int		main(void)
{
	printf("%s\n", strpbrk("hello", "e"));
	//printf("%s\n", strpbrk("hello", "es"));
	printf("%s\n", ft_strpbrk("hello", "e"));
}

#endif

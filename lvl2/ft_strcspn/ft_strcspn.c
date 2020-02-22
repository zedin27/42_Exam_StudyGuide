#include <string.h>

char	find_char(const char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

size_t		ft_strcspn(const char *s, const char *reject)
{
	size_t i;

	i = 0;
	while (s[i])
	{
		if (find_char(reject, s[i]) != 0) 
			break ;
		i++;
	}
	return (i);
}

#ifdef TEST
#include <string.h>
#include <stdio.h>

int		main(void)
{
	//char test[] = "hello world!";
	//char test1[] = "world!";
	/*char hay[] = "lol idk if i need to make my own size_t";
	char needle[] = "size_t";
	char one[] = " ";
	char weird[] = "1234567890";

	printf("%lu\n", strcspn(one, weird));
	printf("%lu\n", ft_strcspn(one, weird));
	
	printf("%lu\n", strcspn(hay, needle));
    printf("%lu\n", ft_strcspn(hay, needle));
	return (0);
	*/
	char haystack[] = "This is a test string";
	char accept[] = "tga";

	printf("%zu\n", ft_strcspn(haystack, accept));
	printf("%zu\n", strcspn(haystack, accept));
}

#endif


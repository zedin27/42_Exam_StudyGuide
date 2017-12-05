#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(const char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dst, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strdup(char *src)
{
	int a;
	char *b;

	a = ft_strlen(src);
	b = malloc(sizeof(char) * a + 1);
	if (b == NULL)
		return (NULL);
	b = ft_strcpy(b, src);
	return (b);
}

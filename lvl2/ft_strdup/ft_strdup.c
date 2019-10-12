#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *s2, char *s1)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		len;

	len = ft_strlen(src);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if(!str)
		return (NULL);
	str = ft_strcpy(str, src);
	return (str);
}

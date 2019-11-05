void	ft_swap(char *a, char *b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

char	*ft_strrev(char *str)
{
	int left;
	int right;

	right = 0;
	while (str[right])
		right++;
	left = -1;
	while (++left < --right)
		ft_swap(&str[left], &str[right]);
	return (str);
}

#ifdef TEST
#include <stdio.h>

int		main(void)
{
	char *str = "yolo";
	printf("%s\n", ft_strrev(str));
}

#endif

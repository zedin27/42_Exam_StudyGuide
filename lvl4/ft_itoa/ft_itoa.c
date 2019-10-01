#include <stdlib.h>

int		count_digits(unsigned int n, int base)
{
	int len = 0;
	if (n == 0)
		len++;
	while (n > 0)
	{
		len++;
		n /= base;
	}
	return (len);
}

char    *ft_itoa_base(int value, int base)
{
	char digit[16] = "0123456789ABCEDF";
	unsigned int n = (value < 0 && base == 10) ? -value : value;
	int len = count_digits(n, base);
	char *out = malloc(sizeof(char) * (len + 1));

	out[len] = '\0';
	if (base == 10 && value < 0)
		len++;
	if (value == 0)
		out[0] = '0';
	if (value < 0 && base == 10)
		out[0] = '-';

	int i = len;
	int digit_index;
	while (n != 0)
	{
		i--;
		digit_index = n % base;
		out[i] = digit[digit_index];
		n /= base;
	}
	return (out);
}

char    *ft_itoa(int nbr)
{
	return (ft_itoa_base(nbr, 10));
}

#ifdef TEST

#include <printf.h>
#include <limits.h>

int	main(void)
{
	int value = 0;
	int base = 16;

	printf("%s\n", ft_itoa_base(value, base));
	printf("%s\n", ft_itoa(value));
	return (0);
}

#endif

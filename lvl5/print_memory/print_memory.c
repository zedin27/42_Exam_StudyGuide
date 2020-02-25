#include <unistd.h>
#define IS_PRINT(x) ((x) >= 32 && (x) <= 126)

void	print_hex_byte(const unsigned char num)
{
	char hex_digits[] = "0123456789abcdef";
	write(1, &hex_digits[num / 16], 1);
	write(1, &hex_digits[num % 16], 1);
}

void	print_row_hex(size_t bytes_remaining, const unsigned char *addr)
{
	size_t i = 0;
	while (i < 16)
	{
		if (i < bytes_remaining)
			print_hex_byte(addr[i]);
		else
			write(1, "  ", 2);
		++i;
		if (i % 2 == 0)
			write(1, " ", 1);
	}
}

void	print_row_ascii(size_t bytes_remaining, const unsigned char *addr)
{
	size_t i = 0;
	while (i < bytes_remaining && i < 16)
	{
		if (IS_PRINT(addr[i]))
			write(1, &addr[i], 1);
		else
			write(1, ".", 1);
		++i;
	}
}

void	print_memory(const void *addr, size_t size)
{
	size_t i = 0;

	while (i < size)
	{
		print_row_hex(size - i, addr + i);
		print_row_ascii(size - i, addr + i);
		write(1, "\n", 1);
		i += 16;
	}
}

#ifdef TEST

int	main(void)
{
	int	tab[10] = {0, 23, 150, 255, 12, 16,  42, 103};
	(void)tab;

	print_memory(tab, sizeof(tab));
	write(1, "\n", 1);
	return (0);
}

#endif

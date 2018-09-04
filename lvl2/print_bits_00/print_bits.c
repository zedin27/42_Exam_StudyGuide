#include <unistd.h>

void 	print_bits(unsigned char octet)
{
	unsigned int bit;
	int size;

	size = 8;
	while (size--)
	{
		bit = (octet>>size & 1) + '0';
		write(1, &bit, 1);
	}
}

int		main(void)
{
	print_bits('1');
}

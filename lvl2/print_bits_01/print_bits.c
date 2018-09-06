#include <unistd.h>

void print_bits(unsigned char octet)
{
	int size;

	size = 128;
	while (size > 0)
	{
		write(1, (octet & size) ? "1" : "0", 1);
		size >>= 1;
	}
}

int main(void)
{
	int n = 2;
	print_bits(n);
}

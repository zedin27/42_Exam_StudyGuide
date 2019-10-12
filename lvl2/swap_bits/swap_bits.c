unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

#ifdef TEST

#include <stdio.h>
int main(void)
{
	unsigned char octet = '2';
	printf("%d\n", swap_bits(octet)); //16
	return (0);
}

#endif

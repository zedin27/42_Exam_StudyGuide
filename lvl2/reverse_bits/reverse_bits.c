unsigned char   reverse_bits(unsigned char octet)
{
	octet = (octet * 0x0202020202ULL & 0x010884422010ULL) % 1023;

	return (octet);
}

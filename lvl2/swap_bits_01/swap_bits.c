/* FAIL - BOOLEAN != BIT */

//Good 40mins to figure my problem lmao
unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4 || octet << 4));

	//return ((octet >> 4 | octet << 4)); <---- RIGHT
}

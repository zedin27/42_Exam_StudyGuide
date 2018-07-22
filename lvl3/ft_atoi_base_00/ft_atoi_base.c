/*
	Write a function that converts the string argument str (base N <= 16)
	to an integer (base 10) and returns it.

	The characters recognized in the input are: 0123456789abcdef
	Those are, of course, to be trimmed according to the requested base. For
	example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

	Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

	Minus signs ('-') are interpreted only if they are the first character of the
	string.
*/

int		base_len(char num, int base)
{
	char	num_low[17] = "0123456789abcdef";
	char	num_upp[17] = "0123456789ABCDEF";

	while (base--)
		if (num == num_low[base] || num == num_upp[base])
			return (1);
	return (0);
}

int		value_c(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (0);

}

int		ft_atoi_base(const char *str, int str_base)
{
	int value;
	int sign;

	value = 0;
	sign = 1;
	if (*str == '\0')
		return (0);
	while (*str == ' ')
		str++;
	sign = (*str == '-') ? -1 : 1;
	while (base_len(*str, str_base))
		value = (value * str_base) + value_c(*str++);
	return (sign * value);
}

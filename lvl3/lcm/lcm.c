unsigned int	gcd(unsigned int num, unsigned int den)
{
	if (den == 0)
		return (num);
	return (gcd(den, num % den));
}

unsigned int	lcm(unsigned int num, unsigned int den)
{
	return ((num * den) / gcd(num, den));
}

#ifdef TEST
#include <stdio.h>

int		main(void)
{
	printf("LCM: %d\n", lcm(65, 10));
	return (0);
}

#endif

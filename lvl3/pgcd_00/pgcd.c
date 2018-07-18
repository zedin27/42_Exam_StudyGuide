#include <unistd.h>
#include <stdio.h> //printf function
#include <stdlib.h> //atoi function

/*
** Greatest Common Divisor OR Greatest Common Factor calculator
** Attempt the code in 3 different ways:
** -> mod ✅
** -> substraction
** -> recursive
*/

int		gcd(int num, int den)
{
	int tmp;

	while (den != 0)
	{
		tmp = den;
		den = (num % den);
		num = tmp;
	}
	if (num < 0)
		num *= -1;
	return (num);
}

int		main(int argc, char *argv[])
{
	if (argc == 3)
		printf("GCD for %s and %s is %d", argv[1], argv[2], gcd(atoi(argv[1]), atoi(argv[2])));
	printf("\n");
	return (0);
}

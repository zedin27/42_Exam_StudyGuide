#include <stdio.h>
#include <stdlib.h>
/*
	REMOVE INT MAIN BEFORE SUBMITTING THIS

	Write a function who takes two unsigned int as parameters and returns the
	computed LCM of those parameters.

	LCM (Lowest Common Multiple) of two non-zero integers is the smallest postive
	integer divisible by the both integers.

	A LCM can be calculated in two ways:

	- You can calculate every multiples of each integers until you have a common
	multiple other than 0

	- You can use the HCF (Highest Common Factor) of these two integers and
	calculate as follows:

	LCM(x, y) = | x * y | / HCF(x, y)

	| x * y | means "Absolute value of the product of x by y"

	If at least one integer is null, LCM is equal to 0.
*/

int		gcd(int num, int den)
{
	// while (1)
	// {
	// 	if (num == 0)
	// 		return (den);
	// 	den %= num;
	// 	if (den == 0)
	// 		return (num);
	// 	num %= den;
	// }
	unsigned int tmp;

	while (den != 0)
	{
		tmp = den;
		den = (num % den);
		num = tmp;
	}
	return (num);
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	return (b / gcd(a, b)) * a;
	// unsigned int temp;
	//
	// temp = gcd(a, b);
	// return temp ? (b / temp * a) : 0; This is another way to return the value
}

int		main(int argc, char *argv[])
{
	if (argc == 3)
		printf("GCD for %s and %s is %d\n", argv[1], argv[2], gcd(atoi(argv[1]), atoi(argv[2])));
		printf("LCM for %s and %s is %d\n", argv[1], argv[2], lcm(atoi(argv[1]), atoi(argv[2])));
	// printf("\n");
	return (0);
}

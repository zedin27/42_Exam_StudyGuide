#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/*
** Recursive method
*/

int     pgcd(int num, int den)
{
    if (den == 0)
        return (num);
    else
        return (pgcd(den, num % den));
}

int main(int argc, char *argv[])
{
    if (argc >= 2)
    {
        printf("%d\n", pgcd((atoi(argv[1])), atoi(argv[2])));
        return (0);
    }
    write(1, "\n", 1);
    return (0);
    /*
	if (argc != 4)
    {
        write(1, "\n",x 1);
        return (0);
    }
    printf("%d\n", pgcd((atoi(argv[2])), atoi(argv[3])));
    // printf("%d\n", pgcd(80, 100));
	*/
}

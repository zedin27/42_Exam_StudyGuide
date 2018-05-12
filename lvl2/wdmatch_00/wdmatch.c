/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42vecmac <42vecmac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 17:19:40 by 42vecmac          #+#    #+#             */
/*   Updated: 2018/03/28 17:20:28 by 42vecmac2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* FAIL */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		main(int argc, char *argv[])
{
	int i = 0;							//<---- Unused variables
	int j = 0;

	if (argc == 3)
	{
		while (argv[2] != '\0')			// <---- missing argument for argv[2][i]
		{
			if (argv[1] != '\0')		// <---- missing argument for argv[1][j]
			{
				ft_putstr(argv[1]);
				ft_putchar('\n');
				return (0);
			}
			if (argv[2] == argv[1])
				j++;
			i++;
		}
		if (argv[1] != '\0')
			ft_putstr(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}

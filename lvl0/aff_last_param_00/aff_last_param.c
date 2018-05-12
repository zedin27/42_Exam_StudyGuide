/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42vecmac <42vecmac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 16:39:00 by 42vecmac          #+#    #+#             */
/*   Updated: 2018/03/28 16:39:27 by 42vecmac2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		write(1, &str[i], 1);
}

int		main(int argc, char *argv[])
{
	if (argc > 1)
		ft_putstr(argv[argc - 1]);
	else if (argc < 1)
	{
		ft_putstr("\n");
		return (0);
	}
	ft_putstr("\n");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42vecmac <42vecmac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 17:20:49 by 42vecmac          #+#    #+#             */
/*   Updated: 2018/03/28 19:42:27 by 42vecmac2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	print_bits(unsigned char octet)
{
	unsigned int bit;
	int size;

	size = 8;
	while (size--)
	{
		bit = (octet>>size & 1) + '0';
		write(1, &bit, 1);
	}
}

int		main(void)
{
	print_bits('*');
}

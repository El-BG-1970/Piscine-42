/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egros <egros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 15:26:43 by egros             #+#    #+#             */
/*   Updated: 2019/07/08 21:29:32 by egros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "stdio.h"

void	ft_write(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

void	ft_put_hex_ad(unsigned long c)
{
	char o;
	char bs = '.';

	if (c < 16)
	{
		if (c < 10)
		{
			o = c + '0';
			write(1, &o, 1);
			write(1, &bs, 1);
		}
		else
		{
			o = c + 'a' - 10;
			write(1, &o, 1);
			write(1, &bs, 1);
		}
	}
	else
		c = c % 16;
		ft_put_hex_ad(c);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned long	ad;

	ad = (unsigned long)addr;
	printf("%lu\n", ad);
	ft_put_hex_ad(ad);
	return (addr);
}

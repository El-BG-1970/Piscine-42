/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egros <egros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 15:26:43 by egros             #+#    #+#             */
/*   Updated: 2019/07/08 22:31:24 by egros            ###   ########.fr       */
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

	if (c < 16)
	{
		if (c < 10)
		{
			o = c + '0';
			write(1, &o, 1);
		}
		else
		{
			o = c + 'a' - 10;
			write(1, &o, 1);
		}
	}
	else
	{
		ft_put_hex_ad(c / 16);
		ft_put_hex_ad(c % 16);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned long	ad;
	unsigned int	*loc;

	ad = (unsigned long)addr;
	ft_put_hex_ad(ad);
	write(1, ": ", 2);
	return (addr);
}

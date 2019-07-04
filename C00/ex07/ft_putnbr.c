/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egros <egros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 14:16:19 by egros             #+#    #+#             */
/*   Updated: 2019/07/04 15:55:51 by egros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	put_chiffr(int n)
{
	char c;

	c = n + 48;
	write(1, &c, 1);
}

void	put_char(char c)
{
	write(1, &c, 1);
}

void	print(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		put_char(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		print("-214748364");
		ft_putnbr(8);
		return ;
	}
	if (nb < 0)
	{
		put_char('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 10)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
		{
			put_chiffr(nb);
		}
	}
}

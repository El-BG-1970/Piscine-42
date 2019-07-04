/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egros <egros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 21:09:40 by egros             #+#    #+#             */
/*   Updated: 2019/07/04 10:11:47 by egros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	putnbrs(int n, int m, int p)
{
	char c;

	c = n + 48;
	write(1, &c, 1);
	c = m + 48;
	write(1, &c, 1);
	c = p + 48;
	write(1, &c, 1);
	if ((n == 7) && (m == 8) && (p == 9))
		return ;
	c = ',';
	write(1, &c, 1);
	c = ' ';
	write(1, &c, 1);
}

void	comb(void)
{
	int i;
	int j;
	int k;

	i = -1;
	while (i++ < 9)
	{
		j = -1;
		while (j++ < 9)
		{
			k = -1;
			while (k++ < 9)
			{
				if ((i < j) && (j < k))
				{
					putnbrs(i, j, k);
				}
			}
		}
	}
}

void	ft_print_comb(void)
{
	int n;

	n = 0;
	comb();
}

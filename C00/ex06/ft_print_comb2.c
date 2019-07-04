/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egros <egros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 10:16:56 by egros             #+#    #+#             */
/*   Updated: 2019/07/04 12:21:58 by egros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	putnb(int n)
{
	char c;

	c = n + 48;
	write(1, &c, 1);
}

void	putnbs(int i, int j, int k, int l)
{
	char c;

	putnb(i);
	putnb(j);
	c = ' ';
	write(1, &c, 1);
	putnb(k);
	putnb(l);
	if ((i == 9) && (j == 8) && (k == 9) && (l == 9))
		return ;
	c = ',';
	write(1, &c, 1);
	c = ' ';
	write(1, &c, 1);
}

int		checknb(int i, int j, int k, int l)
{
	if (i < k)
		return (0);
	if (i > k)
		return (-1);
	else
	{
		if (j < l)
			return (0);
		else
			return (-1);
	}
}

void	ft_print_comb2(void)
{
	int i;
	int j;
	int k;
	int l;

	i = -1;
	while (i++ < 9)
	{
		j = -1;
		while (j++ < 9)
		{
			k = -1;
			while (k++ < 9)
			{
				l = -1;
				while (l++ < 9)
				{
					if (checknb(i, j, k, l) >= 0)
						putnbs(i, j, k, l);
				}
			}
		}
	}
}

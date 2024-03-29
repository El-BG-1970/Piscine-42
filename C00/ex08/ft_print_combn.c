/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egros <egros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 16:07:33 by egros             #+#    #+#             */
/*   Updated: 2019/07/06 07:36:17 by egros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "stdio.h"

int		puiss(int nb, int exp)
{
	int i;
	int	pow;

	i = 0;
	pow = 1;
	while (i++ < exp)
	{
		pow = pow * nb;
	}
	return (pow);
}

int		ordre(int nb)
{
	int p;

	p = 0;
	while (nb/10 > 1)
	{
		p++;
		nb = nb/10;
	}
	return (p);
}

int		test(int nb, int ord)
{
	int j;

	j = nb/puiss(10, ord);
	j = j * puiss(10, ord-1);
	if ((j > nb) && (test(nb - j, ord -1) == 1))
		return (1);
	else
		return (-1);
}

void	ft_print_combn(int n)
{
	int	i;

	i = -1;
	while (i++ < puiss(10, n+1))
	{
		if (test(i, ordre(i)) == 1)
			printf("%i, ", i);
	}
}

int		main()
{
	ft_print_combn(2);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egros <egros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 16:07:33 by egros             #+#    #+#             */
/*   Updated: 2019/07/04 19:05:17 by egros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	comb(int nb)
{
	int i;

	i = -1;
	while (i++ < 9)
	{
		comb(nb -1);
	}
}

void	ft_print_combn(int n)
{

}

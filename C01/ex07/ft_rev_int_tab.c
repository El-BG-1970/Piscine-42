/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egros <egros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 08:34:57 by egros             #+#    #+#             */
/*   Updated: 2019/07/06 09:13:55 by egros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "stdio.h"

void	ft_rev_int_tab(int *tab, int size)
{
	int i;

	if (size > 1)
	{
		i = tab[size - 1];
		tab[size - 1] = tab[0];
		tab[0] = i;
		ft_rev_int_tab(&tab[1], size - 2);
	}
	else
		return ;
}

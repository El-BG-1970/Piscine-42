/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egros <egros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 09:16:41 by egros             #+#    #+#             */
/*   Updated: 2019/07/06 18:15:24 by egros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

void	swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	bubble_sort(int *tab, int size)
{
	int i;
	int j;
	int *left;
	int *right;

	i = 0;
	while (i < size)
	{
		j = 0;
		printf(". ");
		while (j < size - i)
		{
			if (tab[j + 1] < tab[j])
			{
				left = &tab[j];
				right = &tab[j+1];
				swap(left, right);
			}
			j++;
		}
		i++;
	}
	printf("\n");
}

int main()
{
	int	jose[10];

	jose[0] = 933;
	jose[1] = 346;
	jose[2] = 1453;
	jose[3] = 432;
	jose[4] = 560;
	jose[5] = 234;
	jose[6] = 345;
	jose[7] = 463;
	jose[8] = 3453;
	jose[9] = 938;

	int i = -1;
	while (++i < 10)
		printf("%i, ", jose[i]);

	printf("\n");
	bubble_sort(jose, 10);
	
	i = -1;
	while (++i < 10)
		printf("%i, ", jose[i]);

	return (0);
}

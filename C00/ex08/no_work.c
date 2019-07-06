/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egros <egros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 16:07:33 by egros             #+#    #+#             */
/*   Updated: 2019/07/05 15:36:52 by egros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	increment(int arr[], int len)
{
	int j;

	j = 1;
	if ((arr[len - j]) && (arr[len - j] == 9))
	{
		arr[len -j -1]++;
		arr[len - j] = arr[len -j -1] + 1;
	}
	else
	{
		arr[len -j]++;
	}
}

int		end(int arr[], int len)
{
	int k;

	k = len;
	while ((k-- > 1) && arr[k])
	{
		if (!(arr[len - 1]) || !(arr[k] - arr[k-1] == 1))
		{
			return (-1);
		}
	}
	return (0);
}

void	print_arr(int arr[])
{
	int i;
	char c;

	i = -1;
	while (arr[++i])
	{
		c = arr[i] + 48;
		write(1, &c, 1);
	}
}

void	ft_print_combn(int n)
{
	int arr[n];
	int i;
	
	i = -1;
	while (i++ < 9)
	{
		arr[i] = i;
	}

	while (end(arr, n) == 0)
	{
		increment(arr, n);
	}
}

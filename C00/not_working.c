/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egros <egros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 16:07:33 by egros             #+#    #+#             */
/*   Updated: 2019/07/04 18:58:09 by egros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int		test (int arr[], int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (arr[i-1] > arr[i])
			return (-1);
		i++;
	}
	return (0);
}

int		increment(int arr[], int len)
{
	int i;

	i = len - 1;
	while (i >= 0)
	{
		if (++arr[i] > 9)
		{
			arr[i] = arr[i] - 10;
			if (arr[i-1])
				arr[i-1] = arr[i-1] + 1;
			else
				return (-1);
		}
		i--;
	}
	return (0);
}

void	put_chiffr(int n)
{
	char c;

	c = n + 48;
	write(1, &c, 1);
}

void	print(int arr[], int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		put_chiffr(arr[i]);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int cbn[n];
	int j;
	int i;

	i = n-1;
	j = 0;
	while (cbn[j])
	{
		cbn[j] = j;
		j++;
	}
	while (cbn[i] < 9)
	{
		if (test(cbn, n) == 0)
		{
			print(cbn, n);
		}
		if (increment(cbn, n) == -1)
			return ;
	}
}

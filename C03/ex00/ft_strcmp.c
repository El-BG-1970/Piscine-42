/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egros <egros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 11:07:21 by egros             #+#    #+#             */
/*   Updated: 2019/07/09 14:21:22 by egros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int		ft_strcmp(char *s1, char *s2)
{
	unsigned char	*us1;
	unsigned char	*us2;
	int				i;

	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	i = 0;
	while ((us1[i] == us2[i]) && (us1[i]) && (us2[i]))
	{
		i++;
	}
	return ((int)(us1[i] - us2[i]));
}

int main()
{
	char a[] = "Hello boys\200";
	char b[] = "Hello boys";
	char *pa;
	char *pb;
	pa = a;
	pb = b;

	printf("%i", ft_strcmp(pa, pb));
	printf("\n%i", strcmp(pa, pb));
}

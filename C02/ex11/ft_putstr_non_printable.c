/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egros <egros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 12:19:25 by egros             #+#    #+#             */
/*   Updated: 2019/07/09 20:26:27 by egros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int		ft_char_is_printable(char str)
{
	if ((str > 127) || (str < 32))
	{
		return (0);
	}
	return (1);
}

char	*ft_char2hex(unsigned char c)
{
	char	out[2];
	char	*ret;
	int		templ;
	int		tempr;

	ret = out;
	templ = c / 16;
	tempr = c % 16;
	if (templ >= 10)
		out[0] = 97 + (templ - 10);
	else
		out[0] = 48 + templ;
	if (tempr >= 10)
		out[1] = 97 + (tempr - 10);
	else
		out[1] = 48 + tempr;
	return (ret);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		j;
	char	*c;
	char	bs;

	i = -1;
	bs = '\\';
	while (str[++i])
	{
		if (ft_char_is_printable(str[i]) == 1)
			write(1, &str[i], 1);
		else
		{
			j = -1;
			write(1, &bs, 1);
			c = ft_char2hex(str[i]);
			write(1, &c[0], 1);
			write(1, &c[1], 1);
		}
	}
}

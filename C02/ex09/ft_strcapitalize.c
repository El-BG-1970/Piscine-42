/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egros <egros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 10:00:57 by egros             #+#    #+#             */
/*   Updated: 2019/07/08 10:54:55 by egros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_a_n(char str)
{
	if ((((str > 'Z') || (str < 'A')) &&
			((str > 'z') || (str < 'a'))) &&
			((str > '9') || (str < '0')))
	{
		return (0);
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if ((str[0] <= 'z') || (str[0] >= 'a')) 
		str[0] = str[0] - 32;
	while (str[++i])
	{
		if (((str[i] <= 'z') && (str[i] >= 'a')) && !ft_is_a_n(str[i - 1]))
			str[i] = str[i] - 32;
		else 
		{
			if (((str[i] <= 'Z') && (str[i] >= 'A')) && ft_is_a_n(str[i - 1]))
				str[i] = str[i] + 32;
		}
	}
	return (str);
}

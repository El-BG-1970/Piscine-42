/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egros <egros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 22:15:03 by egros             #+#    #+#             */
/*   Updated: 2019/07/09 18:08:59 by egros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] > 'z') || (str[i] < 'a'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egros <egros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 14:23:46 by egros             #+#    #+#             */
/*   Updated: 2019/07/09 14:32:44 by egros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned char	*us1;
	unsigned char	*us2;
	int				i;

	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	i = 0;
	while ((i < n) && (us1[i]) && (us2[i]))
	{
		if (us1[i] != us2[i])
			return ((int)(us1[i] - us2[i]));
		i++;
	}
	return (0);
}

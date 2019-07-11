/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egros <egros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 09:57:45 by egros             #+#    #+#             */
/*   Updated: 2019/07/11 11:13:09 by egros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;
	int	ret;

	i = 0;
	ret = ft_strlen(src) + ft_strlen(dest);
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && (j < size) && (i + j < sizeof(dest)))
	{
		dest[i+j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (ret);
}

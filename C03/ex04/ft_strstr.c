/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egros <egros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 21:44:47 by egros             #+#    #+#             */
/*   Updated: 2019/07/11 00:42:15 by egros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = -1;
	if (*to_find == '\0')
		return (str);
	while (str[++i])
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (to_find[++j])
			{
				if (to_find[j] != str[i + j])
					break ;
			}
			return (&str[i]);
		}
	}
	return (0);
}

int main()
{
        char c1[28] = "je te latte";
        char c2[28] = "je te latte";
        char c3[] = "jose";

        printf("%s\n", ft_strstr(c1, c3));
        printf("%s\n", strstr(c2, c3));
}

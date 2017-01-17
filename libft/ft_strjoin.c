/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myernaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 15:39:05 by myernaux          #+#    #+#             */
/*   Updated: 2017/01/04 12:48:02 by myernaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	len = (ft_strlen((char*)s1) + ft_strlen((char*)s2));
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (str)
	{
		while (*s1 != '\0')
		{
			str[i++] = *s1++;
		}
		while (*s2 != '\0')
		{
			str[i++] = *s2++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}

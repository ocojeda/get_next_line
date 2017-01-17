/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myernaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 16:03:12 by myernaux          #+#    #+#             */
/*   Updated: 2016/11/24 11:59:27 by myernaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		len;

	str = (char *)s;
	len = ft_strlen(str) - 1;
	if (c == '\0')
		return (str + len + 1);
	while (len >= 0)
	{
		if (str[len] == c)
			return (str + len);
		len--;
	}
	return (NULL);
}

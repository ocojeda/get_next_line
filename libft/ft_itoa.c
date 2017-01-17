/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myernaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 10:21:06 by myernaux          #+#    #+#             */
/*   Updated: 2016/11/24 13:31:02 by myernaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_if_negative(int n, char *str)
{
	if (n < 0)
	{
		str[0] = '-';
	}
	return (str);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		tmp;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648\0"));
	i = ABS(n);
	tmp = i;
	len = (n < 0) ? 1 : 0;
	while (tmp /= 10)
		len++;
	if (!(str = (char*)malloc(sizeof(char) * (len + 2))))
		return (0);
	ft_if_negative(n, str);
	str[len + 1] = '\0';
	while (i / 10)
	{
		str[len--] = i % 10 + '0';
		i = i / 10;
	}
	str[len] = i + '0';
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myernaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:31:46 by myernaux          #+#    #+#             */
/*   Updated: 2016/12/06 12:55:41 by myernaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *b, const char *l, size_t len)
{
	size_t	n;

	if (*l == '\0')
		return ((char *)b);
	n = ft_strlen(l);
	while (*b != '\0' && len >= n)
	{
		if (ft_strncmp(b, l, n) == 0)
			return ((char *)b);
		b++;
		len--;
	}
	return (NULL);
}

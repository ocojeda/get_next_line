/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myernaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 11:44:32 by myernaux          #+#    #+#             */
/*   Updated: 2016/11/24 09:42:47 by myernaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s01;
	const unsigned char	*s02;

	s01 = (const unsigned char *)s1;
	s02 = (const unsigned char *)s2;
	while (n)
	{
		if (*s01 != *s02)
			return (*s01 - *s02);
		if (n)
		{
			s01++;
			s02++;
		}
		n--;
	}
	return (0);
}

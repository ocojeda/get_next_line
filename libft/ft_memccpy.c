/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 15:53:00 by ocojeda-          #+#    #+#             */
/*   Updated: 2017/03/01 15:53:03 by ocojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*buf;
	unsigned char	*buf2;
	size_t			i;
	unsigned char	x;

	buf = (unsigned char *)dst;
	buf2 = (unsigned char *)src;
	x = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if ((*buf++ = *buf2++) == x)
			return (buf);
		i++;
	}
	return (NULL);
}

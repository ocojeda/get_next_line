/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 15:54:50 by ocojeda-          #+#    #+#             */
/*   Updated: 2017/03/01 15:54:53 by ocojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *cur;

	if (len == 0)
		return (b);
	cur = (unsigned char *)b;
	while (len--)
	{
		*cur = (unsigned char)c;
		if (len)
			cur++;
	}
	return (b);
}

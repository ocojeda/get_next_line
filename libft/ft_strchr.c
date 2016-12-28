/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 23:55:33 by ocojeda-          #+#    #+#             */
/*   Updated: 2016/11/24 17:51:37 by ocojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int b;

	b = ft_strlen(s);
	i = -1;
	while (++i < (int)ft_strlen(s) + 1)
	{
		if (s[i] == (char)c)
			return ((char*)s + i);
	}
	return (NULL);
}
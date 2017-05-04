/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 15:52:39 by ocojeda-          #+#    #+#             */
/*   Updated: 2017/03/01 15:52:42 by ocojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*memory;
	size_t	i;

	memory = (char *)malloc(size);
	if (!memory)
		return (NULL);
	i = 0;
	while (i < size)
	{
		memory[i] = 0;
		i++;
	}
	return (memory);
}

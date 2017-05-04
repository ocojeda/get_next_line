/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 15:57:41 by ocojeda-          #+#    #+#             */
/*   Updated: 2017/03/01 15:57:42 by ocojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	char *new;

	if (ptr == NULL)
		return (NULL);
	if (!size && ptr != NULL)
	{
		if ((new = (char *)malloc(1)) == NULL)
			return (NULL);
		free(ptr);
		return (new);
	}
	if ((new = (char *)malloc(size)) == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		ft_memcpy(new, ptr, size);
		free(ptr);
	}
	return (new);
}

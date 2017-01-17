/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myernaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 16:08:47 by myernaux          #+#    #+#             */
/*   Updated: 2016/12/06 11:04:55 by myernaux         ###   ########.fr       */
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

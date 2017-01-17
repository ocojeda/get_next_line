/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myernaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 10:50:26 by myernaux          #+#    #+#             */
/*   Updated: 2016/11/29 09:08:21 by myernaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char const *big, char const *little)
{
	int i;
	int j;

	i = 0;
	if (!*little)
		return ((char*)big);
	while (big[i] != '\0')
	{
		j = 0;
		while (little[j] == big[i + j])
		{
			if (little[1 + j] == '\0')
			{
				return ((char*)big + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

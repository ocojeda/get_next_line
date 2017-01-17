/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myernaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 13:49:24 by myernaux          #+#    #+#             */
/*   Updated: 2016/11/22 09:08:36 by myernaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(int c)
{
	c = (unsigned char)c;
	if (c == '\r' || c == '\t' || c == '\f' || c == '\n' || c == '\v')
		return (1);
	else if (c == ' ')
		return (1);
	else
		return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myernaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 14:18:24 by myernaux          #+#    #+#             */
/*   Updated: 2016/11/22 10:46:42 by myernaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_power(int nb, int power)
{
	int	i;
	int	reste;

	i = 0;
	reste = 1;
	if (power < 0)
		return (0);
	while (i < power)
	{
		reste = reste * nb;
		i++;
	}
	return (reste);
}

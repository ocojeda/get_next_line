/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myernaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 14:27:15 by myernaux          #+#    #+#             */
/*   Updated: 2017/01/13 10:00:08 by myernaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "stdio.h"

int		main(int ac, char **av)
{
	int		fd;
	int		i;
	char	*line;

	i = 0;
	if (ac == 2)
	{
		if ((fd = open(av[1], O_RDONLY)) < 0)
			return (0);
		while (i < 7)
		{
			get_next_line(fd, &line);
			printf("%s\n", line);
			i++;
		}
		close(fd);
	}
	return (0);
}

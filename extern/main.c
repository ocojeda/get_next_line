/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 18:35:00 by ocojeda-          #+#    #+#             */
/*   Updated: 2017/01/17 18:35:09 by ocojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main (int argc, char **argv)
{
	int fd;
	char *line;
	int i;

	if(argc == 2)
	{	
		if((fd = (open(argv[1], O_RDONLY))) == -1)
			return 0;
		while(get_next_line(fd, &line))
		{
			ft_putendl(line);
			free(line);
		}
		close(fd);
	}
	return 0;
}

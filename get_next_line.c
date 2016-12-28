/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 11:55:49 by ocojeda-          #+#    #+#             */
/*   Updated: 2016/12/28 15:37:26 by ocojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "get_next_line.h"

int	read_to_stock(int fd, char **string)
{
	char	buff[BUFF_SIZE + 1] = {'\n'};
	int		ret;
	char	*new_string;

	ret = read(fd, buff, BUFF_SIZE);
	if (ret > 0)
	{
		buff[ret] = '\0';
		new_string = ft_strjoin(*string, buff);
		if(!new_string)
			return -1;
		free(*string);
		*string = new_string;
	}
	return ret;
}

int get_next_line(const int fd, char **line)
{
	static char *stock = NULL;
	char *index;
	int	ret;

	if(!stock && (stock = (char *)ft_memalloc(sizeof(char))) == NULL)
		return -1;
	index = ft_strchr(stock, '\n');
	while(index == NULL)
	{
		ret = read_to_stock(fd, &stock);
		if(ret == 0)
		{
			index = ft_strchr(stock, '\0');
			if(index == stock)
				return 0;
		}
		if(ret < 0)
			return -1;
		index = ft_strchr(stock, '\n');
	}
	*line = ft_strsub(stock, 0, index - stock);
//	*line = ft_strnew(index -stock);
//	ft_strncpy(*line, stock, index - stock);
//	ft_putendl(*line);
	if (!*line)
		return (-1);
	index = ft_strdup(index + 1);
	free(stock);
	stock = index;
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myernaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 14:24:46 by myernaux          #+#    #+#             */
/*   Updated: 2017/01/05 12:50:21 by ocojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"

static int			read_to_buff(int fd, char **string)
{
	char	buff[BUFF_SIZE + 1];
	int		ret;
	char	*new_string;

	ft_memset(buff, '\0', sizeof(buff));
	ret = read(fd, buff, BUFF_SIZE);
	if (ret > 0)
	{
		new_string = ft_strjoin(*string, buff);
		if (!new_string)
			return (-1);
		free(*string);
		*string = new_string;
	}
	return (ret);
}

int					get_next_line(const int fd, char **line)
{
	static char *buff = NULL;
	int			ret;
	char		*index;

	if (!buff && (buff = (char *)ft_memalloc(sizeof(char))) == NULL)
		return (-1);
	index = ft_strchr(buff, '\n');
	while (index == NULL)
	{
		if ((ret = read_to_buff(fd, &buff)) == 0)
		{
			if ((index = ft_strchr(buff, '\0')) == buff)
				return (0);
		}
		else if ((ret = read_to_buff(fd, &buff)) < 0)
			return (-1);
		else
			index = ft_strchr(buff, '\n');
	}
	*index = '\0';
	if (!(*line = ft_strsub(buff, 0, index - buff)))
		return (-1);
	free(buff);
	buff = ft_strdup(++index);
	return (1);
}

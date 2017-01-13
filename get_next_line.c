/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myernaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 14:24:46 by myernaux          #+#    #+#             */
/*   Updated: 2017/01/13 15:11:24 by ocojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"

t_gnl	*check_fd(int fd, t_gnl *first)
{
	t_gnl *temp;
	t_gnl *temp2;

	temp = first;
	while(temp)
	{
		if(fd == temp->fd)
		{
			return temp;
		}
		temp = temp->next;
	}
	temp = temp2;
	temp->next = NULL;
	if(!temp->buff && (temp->buff = (char *)ft_memalloc(sizeof(char))) == NULL)
			return (NULL);
	temp->fd = fd;
	return (temp);
}

static int			read_to_buff(int fd, char **string)
{
	char	*buff;
	int		ret;
	char	*new_string;

	
	buff = ft_strnew(BUFF_SIZE + 1);
	ft_memset(buff, '\n', sizeof(buff));
	ret = read(fd, buff, BUFF_SIZE);
	if (ret > 0)
	{
		buff[ret] = '\0';
		new_string = ft_strjoin(*string, buff);
		if (!new_string)
			return (-1);
		free(*string);
		*string = new_string;
	}
	free(buff);
	return (ret);
}

int					get_next_line(const int fd, char **line)
{
	static t_gnl *all = NULL;
	t_gnl *current;
	int			ret;
	char		*index;

	current = check_fd(fd, all);
	index = ft_strchr(current->buff, '\n');
	while (index == NULL)
	{
		if ((ret = read_to_buff(current->fd, &current->buff)) == 0)
		{
			if ((index = ft_strchr(current->buff, '\0')) == current->buff)
				return (0);
		}
		else if (ret < 0)
			return (-1);
		else
			index = ft_strchr(current->buff, '\n');
	}
	if (!(*line = ft_strsub(current->buff, 0, index - current->buff)))
		return (-1);
	index = ft_strdup(index + 1);
	free(current->buff);
	current->buff = index;
	return (1);
}

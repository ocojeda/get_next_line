/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myernaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 14:24:46 by myernaux          #+#    #+#             */
/*   Updated: 2017/01/16 11:52:50 by ocojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"

static t_list			*check_fd(t_list **file, int fd)
{
	t_list				*tmp;

	tmp = *file;
	while (tmp)
	{
		if ((int)tmp->content_size == fd)
			return (tmp);
		tmp = tmp->next;
	}
	tmp = ft_lstnew("\0", fd);
	ft_lstadd(file, tmp);
	tmp = *file;
	return (tmp);
}
static int			read_to_buff(t_list *current)
{
	char	*buff;
	int		ret;
	char	*new_string;
	int fd = current->content_size;

	buff = ft_strnew(BUFF_SIZE + 1);
	ft_memset(buff, '\n', sizeof(buff));
	ret = read(fd, buff, BUFF_SIZE);
	if (ret > 0)
	{
		buff[ret] = '\0';
		new_string = ft_strjoin(current->content, buff);
		if (!new_string)
			return (-1);
		free(current->content);
		current->content = ft_strdup(new_string);
	}
	free(buff);
	return (ret);
}

int					get_next_line(const int fd, char **line)
{
	static t_list *all;
	t_list *current;
	int			ret;
	char		*index;

	current = check_fd(&all, fd);
	index = ft_strchr(current->content, '\n');
	while (index == NULL)
	{
		ret = read_to_buff(current);
		if (ret == 0)
		{
			if ((index = ft_strchr(current->content, '\0')) == current->content)
				return (0);
		}
		else if (ret < 0)
			return (-1);
		else
			index = ft_strchr(current->content, '\n');
	}
	if (!(*line = ft_strsub(current->content, 0, index - (char *)current->content)))
		return (-1);
	index = ft_strdup(index + 1);
	free(current->content);
	current->content = ft_strdup(index);
	return (1);
}

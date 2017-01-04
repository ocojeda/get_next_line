/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 10:31:28 by ocojeda-          #+#    #+#             */
/*   Updated: 2017/01/04 15:20:28 by ocojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "get_next_line.h"

int	read_to_buff(int fd, char **string)
{
	char	buff[BUFF_SIZE + 1] = {'\n'};
	int		ret;
	char	*new_string;

	ret = read(fd, buff, BUFF_SIZE);
	if (ret > 0)
	{
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
	static char *buff = NULL;
	int ret;
	char *index;

	if(!buff && (buff = (char *)ft_memalloc(sizeof(char))) == NULL)
		return -1;
	index = ft_strchr(buff, '\n');
	while(index == NULL)
	{
		ret = read_to_buff(fd, &buff);
		if (ret == 0)
		{
			if((index = ft_strchr(buff, '\0')) == buff)
				return 0;
		}
		else if(ret < 0)
			return -1;
		else 
			index = ft_strchr(buff, '\n');
	}
	*line = ft_strsub(buff, 0 , index - buff);
	*index = '\0';
	if(!*line)
		return -1;
	free(buff);
	buff = ft_strdup(++index);
	return 1;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocojeda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 17:09:34 by ocojeda-          #+#    #+#             */
/*   Updated: 2017/01/13 13:27:56 by ocojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 8
typedef struct s_gnl
{
	int fd;
	char *buff;
	struct s_gnl *next;
}				t_gnl;
int get_next_line(const int fd, char **line);
#endif

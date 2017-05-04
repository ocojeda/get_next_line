/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocojeda- <ocojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 15:00:28 by ocojeda-          #+#    #+#             */
/*   Updated: 2017/05/04 20:21:18 by ocojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "fcntl.h"
# include "libft/libft.h"
# include "unistd.h"
# include "stdlib.h"

# define BUFF_SIZE 100
# define FD_MAX 200000000

int		get_next_line(const int fd, char **line);

#endif

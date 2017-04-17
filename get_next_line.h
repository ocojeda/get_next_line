/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfaure <tfaure@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 15:00:28 by tfaure            #+#    #+#             */
/*   Updated: 2017/04/17 17:23:35 by tfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "fcntl.h"
# include "libft/libft.h"
# include "unistd.h"
# include "stdlib.h"

# define BUFF_SIZE 100000000

int		get_next_line(const int fd, char **line);

#endif

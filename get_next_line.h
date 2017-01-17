/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myernaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 15:00:28 by myernaux          #+#    #+#             */
/*   Updated: 2017/01/17 08:19:26 by myernaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "fcntl.h"
# include "../libft/libft.h"
# include "unistd.h"
# include "stdlib.h"

# define BUFF_SIZE 10

int		get_next_line(const int fd, char **line);

#endif

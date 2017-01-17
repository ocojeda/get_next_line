/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myernaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 09:58:48 by myernaux          #+#    #+#             */
/*   Updated: 2016/12/06 12:41:45 by myernaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*list;
	t_list	*new;

	list = *alst;
	while (list != '\0')
	{
		new = list->next;
		del(list->content, list->content_size);
		free(list);
		list = new;
	}
	*alst = NULL;
}

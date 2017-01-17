/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myernaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 08:05:25 by myernaux          #+#    #+#             */
/*   Updated: 2016/12/08 09:18:17 by myernaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_word(char const *s, char c)
{
	int		word;
	int		j;

	word = 0;
	j = 0;
	while (*s != '\0')
	{
		if (j == 1 && *s == c)
			j = 0;
		if (j == 0 && *s != c)
		{
			j = 1;
			word++;
		}
		s++;
	}
	return (word);
}

static int		ft_srchlen(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		nb;
	int		i;
	int		len;

	if (!s || !c)
		return (NULL);
	nb = ft_word((char const*)s, c);
	if ((str = (char**)malloc(sizeof(*str) * (nb + 1))) == NULL)
		return (NULL);
	i = 0;
	while (nb-- > 0)
	{
		while (*s == c && *s != '\0')
			s++;
		len = ft_srchlen((char const*)s, c);
		str[i] = ft_strsub((char const*)s, 0, len);
		s = s + len;
		i++;
	}
	str[i] = NULL;
	return (str);
}

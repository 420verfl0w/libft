/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 22:01:09 by stales            #+#    #+#             */
/*   Updated: 2022/03/10 15:19:07 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_get_words(char *str, char c)
{
	int	i;

	i = 0;
	while (*str)
	{
		while (*str && *str != c)
			str++;
		if (*str == c)
		{
			while (*str && *str == c)
				str++;
			if (*str && *str != c)
				i++;
		}
	}
	if (!i)
		i++;
	return (i);
}

char	**ft_split(char *s, char c)
{
	char		**ptr;
	char		*tmp;
	char		*buf;
	char		*save;
	int			i;
	int			x;

	buf = ft_strnew(ft_strlen(s));
	ft_strncpy(buf, s, ft_strlen(s));
	x = 0;
	i = ft_get_words(buf, c);
	save = buf;
	ptr = (char **)malloc(sizeof(char *) * i);
	while (x < i)
	{
		while (*buf && *buf == c)
			buf++;
		tmp = buf;
		while (*tmp && *tmp != c)
			tmp++;
		*tmp = 0;
		ptr[x] = ft_strnew(tmp - buf);
		ft_strcpy(ptr[x++], buf);
		buf = ++tmp;
	}
	free(save);
	return (ptr);
}

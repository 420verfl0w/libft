/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 22:01:09 by stales            #+#    #+#             */
/*   Updated: 2022/03/13 12:37:18 by stales           ###   ########.fr       */
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
	char		*buf[2];
	int			i[2];

	buf[0] = ft_strnew(ft_strlen(s) + 1);
	ft_strncpy(buf[0], s, ft_strlen(s));
	i[1] = 0;
	i[0] = ft_get_words(buf[0], c);
	buf[1] = buf[0];
	ptr = (char **)malloc(sizeof(char *) * i[0]);
	while (i[1] <= i[0])
	{
		while (*buf[0] && *buf[0] == c)
			buf[0]++;
		tmp = buf[0];
		while (*tmp && *tmp != c)
			tmp++;
		*tmp = 0;
		ptr[i[1]] = ft_strnew(tmp - buf[0]);
		ft_strcpy(ptr[i[1]++], buf[0]);
		buf[0] = ++tmp;
	}
	free(buf[1]);
	return (ptr);
}

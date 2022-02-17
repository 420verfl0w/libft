/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:54:11 by stales            #+#    #+#             */
/*   Updated: 2022/02/17 23:36:23 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, int n)
{
	char	*tmp;
	char	*sstr;

	if (!*to_find)
		return (str);
	while (str && to_find && *str && n--)
	{
		if (*str == *to_find)
		{
			tmp = to_find;
			sstr = str;
			while (*sstr && *tmp && *sstr++ == *tmp)
				tmp++;
			if (*tmp == 0)
				return (str);
		}
		str++;
	}
	return ((void *) 0);
}

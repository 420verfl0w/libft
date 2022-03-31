/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:54:11 by stales            #+#    #+#             */
/*   Updated: 2022/03/31 16:34:33 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, int n)
{
	char	*tmp;
	char	*ttmp;
	char	*sstr;

	if (!*to_find)
		return (str);
	ttmp = str;
	while (to_find && *str && (str - ttmp) < n--)
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
	return (LIBFT_NULL);
}

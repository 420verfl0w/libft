/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:54:11 by stales            #+#    #+#             */
/*   Updated: 2022/04/02 15:44:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	@brief			The ft_strstr() function locates the first occurrence of the
 *					null-terminated string to_find in the null-terminated string
 *					str.
 *
 *	@param str		the "haystack"
 *	@param to_find	the "needle"
 *
 *	@return (char *)If to_find is an empty string, str is returned; if to_find
 *					occurs nowhere in str, LIBFT_NULL is returned; otherwise a
 *					pointer to the first character of the first occurrence of
 *					to_find is returned.
 */

char	*ft_strstr(char *str, char *to_find)
{
	char	*tmp;
	char	*sstr;

	if (!*to_find)
		return (str);
	while (to_find && *str)
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:45:00 by stales            #+#    #+#             */
/*   Updated: 2022/04/02 15:21:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	@brief			The ft_strchr() function returns a pointer to the first
 *					occurence of the character c in the string s
 *
 *	@param s		string to search on
 *	@param c		character to search for
 *
 *	@return (int)		The strchr() functions return a pointer to the matched
 *					character or NULL if the character is not found. The
 *					terminating null byte is considered part of the string, so
 *					that if c is specified as '\0', these functions return a
 *					pointer to the terminator.
 */

char	*ft_strchr(const char *s, int c)
{
	char	*tmp;

	tmp = (char *)s;
	while (*tmp && *tmp != (char)c)
		tmp++;
	if (*tmp == c)
		return (tmp);
	return (LIBFT_NULL);
}

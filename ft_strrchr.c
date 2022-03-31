/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 01:31:25 by pix               #+#    #+#             */
/*   Updated: 2022/03/31 02:05:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Desc:	The ft_strchr() function returns a pointer to the last occurence
 *			of the character c in the string s
 *
 *	*s:		string to search on
 *	c:		character to search for
 *
 *	Return: The strcchr() functions return a pointer to the matched character
 *			or NULL if the character is not found. The terminating null byte is
 *			considered part of the string, so that if c is specified as '\0',
 *			these functions return a pointer to the terminator.
 */

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	char	*last_occur;

	tmp = (char *)s;
	last_occur = 0;
	if (!c)
	{
		while (*tmp)
			tmp++;
		return (tmp);
	}
	while (*tmp)
	{
		if (*tmp == (char)c)
			last_occur = tmp;
		tmp++;
	}
	return (last_occur);
}

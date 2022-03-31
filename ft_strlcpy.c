/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 00:07:10 by stales            #+#    #+#             */
/*   Updated: 2022/03/31 02:15:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Desc:	The ft_strlcpy() function copy strings.
 *			function copies up to size - 1 characters from the NUL-terminated
 *			string src to dst, NUL-terminating the result.

 *	*dest:	string to copy on
 *	*src:	string to copy from
 *	size:	full size of dest
 *
 *	Return: The ft_strlcat() function return the total length of the string
 *			he tried to create. that means the length of src.
 */

t_uint32	ft_strlcpy(char *dest, char *src, t_size size)
{
	char			*tmp;
	t_uint32		i;

	tmp = src;
	while (*tmp)
		tmp++;
	i = tmp - src;
	if (!size)
		return (i);
	tmp = dest;
	while (--size && *src)
		*dest++ = *src++;
	*dest = 0;
	return (i);
}

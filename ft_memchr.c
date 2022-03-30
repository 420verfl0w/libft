/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 22:26:32 by stales            #+#    #+#             */
/*   Updated: 2022/03/30 17:49:34 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Desc:	The ft_memchr() function scans the initial n bytes of the memory
 *			area pointed to by s for the first instance of c.
 *
 *	*s:		memory area to search from
 *	c:		character to search for
 *	n:		number of inital bytes to analyse
 *
 *	Return:	The ft_memchr() functions return a pointer to the matching byte or
 *			NULL if the character does not occur in the given memory area.
 */

void	*ft_memchr(const void *s, int c, t_size n)
{
	t_uint8	*tmp;

	tmp = (t_uint8 *)s;
	while (--n)
	{
		if (*tmp == (t_uint8)c)
			return (tmp);
		tmp++;
	}
	return (LIBFT_NULL);
}

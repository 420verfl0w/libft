/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:17:58 by stales            #+#    #+#             */
/*   Updated: 2022/02/19 14:35:21 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Desc:	The ft_memset() function fills the first n bytes of the memory area
 *			pointed to by s with the constant byte c.
 *
 *	*s:		destination memory area
 *	c:		char to fill with
 *	n:		first bytes to fill
 *
 *	Return:	The ft_memset() function returns a pointer to dest.
 */

void	*ft_memset(void *s, int c, t_size n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	while (n--)
		*tmp++ = (unsigned char)c;
	return (s);
}

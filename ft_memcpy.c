/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:32:38 by stales            #+#    #+#             */
/*   Updated: 2022/03/30 17:36:34 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Desc:	The ft_memcpy() function copies n bytes from memory area src to
 *			memory area dest.
 *			The memory areas must not overlap.
 *
 *	*dest:	destination memory area
 *	*src:	source memory area
 *	n:		number of bytes to copy
 *
 *	Return:	The ft_memcpy() function returns a pointer to dest.
 */

void	*ft_memcpy(void *dest, const void *src, t_size n)
{
	unsigned char	*tdst;
	unsigned char	*tsrc;

	if (!dest && !src)
		return (dest);
	tsrc = (unsigned char *)src;
	tdst = (unsigned char *)dest;
	while (n--)
		*tdst++ = *tsrc++;
	return (dest);
}

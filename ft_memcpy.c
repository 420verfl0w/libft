/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:32:38 by stales            #+#    #+#             */
/*   Updated: 2022/04/02 15:18:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	@brief			The ft_memcpy() function copies n bytes from memory area src
 *					to memory area dest.
 *					The memory areas must not overlap.
 *
 *	@param dest		destination memory area
 *	@param src		source memory area
 *	@param n		number of bytes to copy
 *
 *	@return (void *)The ft_memcpy() function returns a pointer to dest.
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

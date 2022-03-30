/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:11:10 by stales            #+#    #+#             */
/*   Updated: 2022/03/30 17:41:21 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Desc:	The  memccpy() function copies no more than n bytes from memory
 *			area src to memory area dest, stopping when the character c is
 *			found.
 *			If the memory areas overlap, the results are undefined.
 *
 *	*dest:	memory area of the destination
 *	*src:	memory area of the source
 *	c:		character to stop from
 *	n:		number of bytes to copy from src memory area
 *
 *	Return:	The memccpy() function returns a pointer to the next character in
 *			dest after c, or  NULL  if  c was not found in the first n
 *			characters of src.
 */

void	*ft_memccpy(void *dest, const void *src, int c, t_size n)
{
	unsigned char	*tdst;
	unsigned char	*tsrc;

	tsrc = (unsigned char *)src;
	tdst = (unsigned char *)dest;
	while (*tsrc && n--)
	{
		*tdst = *tsrc;
		if (*tdst++ == (unsigned char)c)
			return (tdst);
		tsrc++;
	}
	return (LIBFT_NULL);
}

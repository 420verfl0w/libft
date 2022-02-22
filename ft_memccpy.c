/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:11:10 by stales            #+#    #+#             */
/*   Updated: 2022/02/19 14:09:36 by pix              ###   ########.fr       */
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
	char	*tdst;
	char	*tsrc;

	tsrc = (char *)src;
	tdst = (char *)dest;
	while (*tsrc && n--)
	{
		*tdst = *tsrc;
		if (*tdst++ == c)
			return (tdst);
		tsrc++;
	}
	return ((void *)0);
}

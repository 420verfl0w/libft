/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:17:58 by stales            #+#    #+#             */
/*   Updated: 2022/04/02 15:18:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	@brief			The ft_memset() function fills the first n bytes of the
 *					memory area pointed to by s with the constant byte c.
 *
 *	@param s		destination memory area
 *	@param c		char to fill with
 *	@param n		first bytes to fill
 *
 *	@return (void *)		The ft_memset() function returns a pointer to dest.
 */

void	*ft_memset(void *s, int c, t_size n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	while (n--)
		*tmp++ = (unsigned char)c;
	return (s);
}

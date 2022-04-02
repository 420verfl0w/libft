/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:52:28 by stales            #+#    #+#             */
/*   Updated: 2022/04/02 15:13:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	@brief			The  bzero()  function  erases  the  data in the n bytes of
 *					the memory starting at the location pointed to by s, by
 *					writing zeros (bytes containing '\0') to that area.
 *
 *	@param s		area to reset
 *	@param n		number of byte to reset
 *
 *	@return (void)	None.
 */

void	ft_bzero(void *s, t_size n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	while (n--)
		*tmp++ = 0;
}

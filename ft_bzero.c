/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:52:28 by stales            #+#    #+#             */
/*   Updated: 2022/03/30 17:18:27 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Desc:	The  bzero()  function  erases  the  data in the n bytes of the
 *			memory starting at the location pointed to by s, by writing
 *			zeros (bytes containing '\0') to that area.
 *
 *	*s:		area to reset
 *	*n:		number of byte to reset
 *
 * 	Return: None.
 */

void	ft_bzero(void *s, t_size n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	while (n--)
		*tmp++ = 0;
}

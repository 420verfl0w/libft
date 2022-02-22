/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:52:28 by stales            #+#    #+#             */
/*   Updated: 2022/02/19 13:32:06 by pix              ###   ########.fr       */
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

	if (!s)
		return ;
	tmp = (unsigned char *)s;
	while (n--)
		*tmp++ = 0;
}

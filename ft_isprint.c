/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:47:57 by pix               #+#    #+#             */
/*   Updated: 2022/04/02 15:17:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	@brief			checks if c is any printable character including space.
 *
 *	@param c		character value to check
 *
 *	@return (int)	nonzero if character is printable and zero if not
 */

int	ft_isprint(int c)
{
	return (c >= ' ' && c < 0x7F);
}

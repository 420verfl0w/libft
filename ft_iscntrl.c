/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 02:31:28 by pix               #+#    #+#             */
/*   Updated: 2022/04/02 15:14:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	@brief			checks if c is a control character.
 *
 *	@param c		character value to check
 *
 *	@return (int)	nonzero if character is a control character and zero if not
 */

int	ft_iscntrl(int c)
{
	return ((c >= '\0' && c <= 0x1F) || c == 0x7F);
}

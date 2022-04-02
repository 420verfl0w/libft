/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:43:03 by pix               #+#    #+#             */
/*   Updated: 2022/04/02 15:13:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	@brief			checks if c fit in the ascii table.
 *
 *	@param c		character value to check
 *
 *	@return (int)		nonzero if character is in the ascii table and zero if not
 */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 0x7F);
}

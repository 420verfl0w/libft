/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:06:54 by pix               #+#    #+#             */
/*   Updated: 2022/04/02 15:50:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	@brief			converts the letter c to lower case, if possible.
 *
 *	@param c		character to convert
 *
 *	@return (int)	The value returned is that of the converted letter, or c if
 *					the conversion was not possible.
 */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c ^ 0x20);
	return (c);
}

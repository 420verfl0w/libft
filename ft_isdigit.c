/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:31:21 by pix               #+#    #+#             */
/*   Updated: 2022/04/02 15:17:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	@brief			checks if c is a digit (0 through 9).
 *
 *	@param c		character value to check
 *
 *	@return (int)	nonzero if character is a digit and zero if not
 */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

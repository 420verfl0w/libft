/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:49:48 by pix               #+#    #+#             */
/*   Updated: 2022/04/02 15:14:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	@brief			checks if c is a blank character; that is, a space or a tab.
 *
 *	@param c		character value to check
 *
 *	@return (int)	nonzero if character is a blank character and zero if not
 */

int	ft_isblank(int c)
{
	return (c == ' ' || c == '\t');
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:17:11 by stales            #+#    #+#             */
/*   Updated: 2022/04/02 15:17:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	@brief			checks if c is any printable character except space.
 *
 *	@param c		character value to check
 *
 *	@return (int)	nonzero if character is any printable character except space
 *					zero if not
 */

int	ft_isgraph(int c)
{
	return (c > ' ' && c < 0x7F);
}

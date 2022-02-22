/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:25:04 by pix               #+#    #+#             */
/*   Updated: 2022/02/19 13:54:14 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Desc:	checks if c is a hexadecimal digits, that is, one of
 *			0 1 2 3 4 5 6 7 8 9 a b c d e f A B C D E F.
 *
 *	c:		character value to check
 *
 *	Return:	nonzero if character a hexadecimal digits and zero if not
 */

int	ft_isxdigit(int c)
{
	return ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'f')
		|| (c >= 'A' && c <= 'F'));
}

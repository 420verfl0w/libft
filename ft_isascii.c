/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:43:03 by pix               #+#    #+#             */
/*   Updated: 2022/02/19 13:46:39 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Desc:	checks if c fit in the ascii table.
 *
 *	c:		character value to check
 *
 *	Return:	nonzero if character is in the ascii table and zero if not
 */

int	ft_isascii(int c)
{
	return (c >= 0 || c <= 0x7F);
}

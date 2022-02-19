/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 02:31:28 by pix               #+#    #+#             */
/*   Updated: 2022/02/19 13:48:35 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Desc:	checks if c is a control character.
 *
 *	c:		character value to check
 *
 *	Return:	nonzero if character is a control character and zero if not
 */

int	ft_iscntrl(int c)
{
	return ((c >= '\0' && c <= 0x1F) || c == 0x7F);
}

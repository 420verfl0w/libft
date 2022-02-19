/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:47:57 by pix               #+#    #+#             */
/*   Updated: 2022/02/19 14:00:03 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Desc:	checks if c is any printable character except space.
 *
 *	c:		character value to check
 *
 *	Return:	nonzero if character is any printable character except space and
 *			zero if not
 */

int	ft_isgraph(int c)
{
	return (c > ' ' && c < 0x7F);
}

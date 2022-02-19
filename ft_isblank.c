/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:49:48 by pix               #+#    #+#             */
/*   Updated: 2022/02/19 13:48:04 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Desc:	checks if c is a blank character; that is, a space or a tab.
 *
 *	c:		character value to check
 *
 *	Return:	nonzero if character is a blank character and zero if not
 */

int	ft_isblank(int c)
{
	return (c == ' ' || c == '\t');
}

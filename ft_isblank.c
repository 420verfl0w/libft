/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:49:48 by pix               #+#    #+#             */
/*   Updated: 2022/03/31 10:53:51 by stales           ###   ########.fr       */
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

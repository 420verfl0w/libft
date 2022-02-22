/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:17:11 by stales            #+#    #+#             */
/*   Updated: 2022/02/22 13:17:58 by stales           ###   ########.fr       */
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

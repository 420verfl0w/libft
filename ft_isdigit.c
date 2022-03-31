/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:31:21 by pix               #+#    #+#             */
/*   Updated: 2022/03/30 18:36:03 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Desc:	checks if c is a digit (0 through 9).
 *
 *	c:		character value to check
 *
 *	Return:	nonzero if character is a digit and zero if not
 */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:01:23 by pix               #+#    #+#             */
/*   Updated: 2022/02/19 13:53:09 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Desc:	checks if c is an lowercase letter
*
*	c:		character value to check
*
*	Return:	nonzero if character is lowercase letter and zero if not
*/

int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

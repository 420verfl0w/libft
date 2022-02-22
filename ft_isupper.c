/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:01:23 by pix               #+#    #+#             */
/*   Updated: 2022/02/19 14:00:03 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Desc:	checks if c is an uppercase letter
*
*	c:		character value to check
*
*	Return:	nonzero if character is an uppercase letter and zero if not
*/

int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

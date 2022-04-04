/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:01:23 by pix               #+#    #+#             */
/*   Updated: 2022/04/04 02:55:27 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	*brief			Checks if c is an uppercase letter
 *
 * @param c			Character value to check
 *
 * @return (int)	Nonzero if character is an uppercase letter and zero if not
 */
int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

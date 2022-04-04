/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:49:48 by pix               #+#    #+#             */
/*   Updated: 2022/04/04 02:54:48 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief			Checks if c is a blank character; that is, a space or a tab.
 *
 * @param c			Character value to check
 *
 * @return (int)	Nonzero if character is a blank character and zero if not
 */
int	ft_isblank(int c)
{
	return (c == ' ' || c == '\t');
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:17:11 by stales            #+#    #+#             */
/*   Updated: 2022/04/04 02:55:03 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief			Checks if c is any printable character except space.
 *
 * @param c			Character value to check
 *
 * @return (int)	Nonzero if character is any printable character except space
 *					zero if not
 */
int	ft_isgraph(int c)
{
	return (c > ' ' && c < 0x7F);
}

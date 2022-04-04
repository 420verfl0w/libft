/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 02:31:28 by pix               #+#    #+#             */
/*   Updated: 2022/04/04 02:59:13 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief			Checks if c is a control character.
 *
 * @param c			Character value to check
 *
 * @return (int)	Nonzero if character is a control character and zero if not
 */
int	ft_iscntrl(int c)
{
	return ((c >= '\0' && c <= 0x1F) || c == 0x7F);
}

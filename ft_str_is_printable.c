/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:49:52 by pix               #+#    #+#             */
/*   Updated: 2022/04/02 15:21:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	@brief			checks if s is an printable string.
 *
 *	@param s		string value to check
 *
 *	@return (int)	nonzero if s is an printable string and zero if not
 */

int	ft_str_is_printable(char *s)
{
	while (*s)
	{
		if (*s < ' ' || *s == 0x7F)
			return (0);
		s++;
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:49:52 by pix               #+#    #+#             */
/*   Updated: 2022/02/19 14:00:03 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Desc:	checks if s is an printable string.
 *
 *	*s:		string value to check
 *
 *	Return:	nonzero if s is an printable string and zero if not
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

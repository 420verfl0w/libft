/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:19:31 by pix               #+#    #+#             */
/*   Updated: 2022/04/02 15:14:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	@brief			checks if c is a white-space characters. In the "C" and
 *					"POSIX" locales, these are:  space,  form-feed ('\f'),
 *					newline ('\n'), carriage return ('\r'), horizontal tab
 *					('\t'), and vertical tab ('\v').
 *
 *	@param c		character value to check
 *
 *	@return (int)	nonzero if character is a white-space characters and zero
 *					if not
 */

int	ft_isspace(int c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

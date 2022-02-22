/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:19:31 by pix               #+#    #+#             */
/*   Updated: 2022/02/19 13:52:06 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Desc:	checks if c is a white-space characters. In the "C" and "POSIX"
 *			locales, these are:  space,  form-feed ('\f'), newline ('\n'),
 *			carriage return ('\r'), horizontal tab ('\t'), and vertical
 *			tab ('\v').
 *
 *	c:		character value to check
 *
 *	Return:	nonzero if character is a white-space characters and zero if not
 */

int	ft_isspace(int c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

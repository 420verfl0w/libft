/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:49:52 by pix               #+#    #+#             */
/*   Updated: 2022/02/19 13:57:42 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Desc:	checks if s is an lowercase string.
 *
 *	*s:		string value to check
 *
 *	Return:	nonzero if s is an lowercase string and zero if not
 */

int	ft_str_is_lowercase(char *s)
{
	while (*s)
	{
		if (*s < 'a' || *s > 'z')
			return (0);
		s++;
	}
	return (1);
}

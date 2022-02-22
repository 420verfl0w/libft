/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:49:52 by pix               #+#    #+#             */
/*   Updated: 2022/02/19 13:59:24 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Desc:	checks if s is an uppercase string.
 *
 *	*s:		string value to check
 *
 *	Return:	nonzero if s is an uppercase string and zero if not
 */

int	ft_str_is_uppercase(char *s)
{
	while (*s)
	{
		if (*s < 'A' || *s > 'Z')
			return (0);
		s++;
	}
	return (1);
}

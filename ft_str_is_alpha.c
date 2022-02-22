/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:42:19 by pix               #+#    #+#             */
/*   Updated: 2022/02/19 13:57:51 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Desc:	checks if s is an alphabetic string
 *
 *	*s:		string value to check
 *
 *	Return:	nonzero if s is an alphabetic string and zero if not
 */

int	ft_str_is_alpha(char *s)
{
	while (*s)
	{
		if ((*s < 'a' || *s > 'z') && (*s < 'A' || *s > 'Z'))
			return (0);
		s++;
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:42:19 by pix               #+#    #+#             */
/*   Updated: 2022/04/02 15:18:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	@brief			checks if s is an alphabetic string
 *
 *	@param s		string value to check
 *
 *	@return (int)	nonzero if s is an alphabetic string and zero if not
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

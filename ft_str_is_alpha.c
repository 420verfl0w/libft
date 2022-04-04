/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:42:19 by pix               #+#    #+#             */
/*   Updated: 2022/04/04 02:59:03 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief			CHECKS if s is an alphabetic string
 *
 * @param s			STRING value to check
 *
 * @return (int)	NONZERO if s is an alphabetic string and zero if not
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:49:52 by pix               #+#    #+#             */
/*   Updated: 2022/04/04 02:59:49 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief			Checks if s is an uppercase string.
 *
 * @param s			String value to check
 *
 * @return (int)	Nonzero if s is an uppercase string and zero if not
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

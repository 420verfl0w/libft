/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:41:43 by stales            #+#    #+#             */
/*   Updated: 2022/04/02 15:36:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	@brief			The ft_strncmp() function compares the first (at most) n
 *					bytes of the two strings s1 and s2.
 *
 *	@param s1		first string
 *	@param s2		second string
 *	@param n		size to compare
 *
 *	@return (int)	return an integer less than, equal to, or greater than zero
 *					if the first n bytes of s1 is found, respectively, to be
 *					less than, to match, or be greater than s2.
 */

int	ft_strncmp(char *s1, char *s2, t_size n)
{
	if (!n)
		return (0);
	while (*s1 && *s2 && --n && *s1++ == *s2)
		s2++;
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

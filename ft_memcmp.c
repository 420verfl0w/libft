/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 00:00:23 by stales            #+#    #+#             */
/*   Updated: 2022/03/30 18:09:38 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Desc:	The ft_memcmp() function compares the first n bytes (each interpreted
 *			as unsigned char) of the memory areas s1 and s2.
 *
 *	*s1:	memory area to compare
 *	*s2:	memory area to compare
 *	n:		number of inital bytes to analyse
 *
 *	Return:	The ft_memcmp() function returns an integer less than, equal to, or
 *			greater than zero if the first n bytes of s1 is found, respectively,
 *			to be less than, to match, or be greater than the first n bytes of
 *			s2.
 *
 *			For a nonzero return value, the sign is determined by the sign of
 *			the difference between the first pair of bytes (interpreted as
 *			unsigned char) that differ in s1 and s2.
 *
 *			If n is zero, the return value is zero.
 */

int	ft_memcmp(const void *s1, const void *s2, t_size n)
{
	unsigned char	*ts1;
	unsigned char	*ts2;

	if (!n)
		return (0);
	ts1 = (unsigned char *)s1;
	ts2 = (unsigned char *)s2;
	while (--n && *ts1 == *ts2)
	{
		ts1++;
		ts2++;
	}
	return (*ts1 - *ts2);
}

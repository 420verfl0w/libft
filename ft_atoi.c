/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:24:34 by stales            #+#    #+#             */
/*   Updated: 2022/04/02 15:11:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief			The  ft_atoi() function converts the initial portion of the
 *					string pointed to by str to int.
 *
 * @param nptr		string to convert
 *
 * @return (int)	The converted value or 0 on error
 */

int	ft_atoi(char *nptr)
{
	int		to_dec;
	int		neg;

	to_dec = 0;
	neg = 1;
	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
		nptr++;
	if ((*nptr == '+' || *nptr == '-'))
		if (*nptr++ == '-')
			neg = ~(neg - 1);
	while (*nptr >= '0' && *nptr <= '9')
	{
		to_dec *= 0xA;
		to_dec += *nptr++ & 0xF;
	}
	return (to_dec * neg);
}

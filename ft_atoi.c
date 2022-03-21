/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:24:34 by stales            #+#    #+#             */
/*   Updated: 2022/03/21 02:22:07 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Desc:	The  ft_atoi() function converts the initial portion of the string
 *			pointed to by str to int.
 *
 *	*nptr:	string to convert
 *
 * 	Return: The converted value or 0 on error
 */

int	ft_atoi(char *nptr)
{
	int		to_dec;
	int		neg;

	to_dec = 0x0;
	neg = 0x1;
	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
		nptr++;
	if ((*nptr == '+' || *nptr == '-'))
		if (*nptr++ == '-')
			neg = ~ -(neg);
	while (*nptr >= '0' && *nptr <= '9')
	{
		to_dec *= 0xA;
		to_dec += *nptr++ & 0xF;
	}
	return (to_dec * neg);
}

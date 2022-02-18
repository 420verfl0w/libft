/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:24:34 by stales            #+#    #+#             */
/*   Updated: 2022/02/18 02:56:04 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Convert str to integer
 */

int	ft_atoi(char *str)
{
	int		to_dec;
	int		neg;

	to_dec = 0x0;
	neg = 0x1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if ((*str == '+' || *str == '-'))
		if (*str++ == '-')
			neg = ~(neg - 0x1);
	while (*str >= '0' && *str <= '9')
	{
		to_dec *= 0xA;
		to_dec += *str++ & 0xF;
	}
	return (to_dec * neg);
}

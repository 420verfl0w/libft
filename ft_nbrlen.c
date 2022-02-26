/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 13:17:18 by pix               #+#    #+#             */
/*   Updated: 2022/02/26 14:00:35 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Desc:	length of an integer.
 *
 *	nb:		integer to take the size of.
 *
 * 	Return:	the length of nb, if number is negative, add +1 for the '-'.
 */

int	ft_nbrlen(long int nb)
{
	int	size;

	size = 0;
	if (nb < 0)
	{
		nb = ~(nb - 1);
		size++;
	}
	while (nb > 9)
	{
		size++;
		nb /= 10;
	}
	return (++size);
}

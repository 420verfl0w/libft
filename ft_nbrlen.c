/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 13:17:18 by pix               #+#    #+#             */
/*   Updated: 2022/04/02 15:17:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	@brief			length of an integer.
 *
 *	@param nb		integer to take the size of.
 *
 *	@return (int)	the length of nb, if number is negative, add +1 for the '-'.
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:25:32 by stales            #+#    #+#             */
/*   Updated: 2022/04/02 15:53:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief			The itoa() constructs a string representation of an integer.
 *
 * @param nb		integer to convert
 *
 * @return (int)	The converted value or 0 on error
 */

char	*ft_itoa(long nb)
{
	long int	nb_size;
	char		*nb_str;

	nb_size = ft_nbrlen(nb);
	nb_str = ft_calloc(0b1, nb_size + 0b1);
	if (nb < 0b0)
	{
		nb = ~(nb - 0b1);
		nb_str[0] = '-';
	}
	if (nb == 0x0)
		nb_str[0b0] = '0';
	while (nb)
	{
		nb_str[nb_size - 0b1] = '0' + (nb % 0xA);
		nb /= 0xA;
		nb_size--;
	}
	return (nb_str);
}

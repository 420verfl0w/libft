/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:25:32 by stales            #+#    #+#             */
/*   Updated: 2022/03/21 02:50:25 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(long nb)
{
	long int	nb_size;
	char		*nb_str;

	nb_size = ft_nbrlen(nb);
	nb_str = malloc(sizeof (char) * nb_size);
	if (nb < 0)
	{
		nb = ~ -nb;
		nb_str[0] = '-';
	}
	while (1)
	{
		nb_str[nb_size - 1] = '0' + (nb % 10);
		nb /= 10;
		if (nb == 0)
			break ;
		nb_size--;
	}
	return (nb_str);
}

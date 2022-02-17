/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:35:46 by stales            #+#    #+#             */
/*   Updated: 2022/02/17 23:36:55 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char *src, t_size n)
{
	char	*tmp;

	tmp = dest;
	while (*tmp)
		tmp++;
	while (n-- && *src)
		*tmp++ = *src++;
	*tmp = 0;
	return (dest);
}

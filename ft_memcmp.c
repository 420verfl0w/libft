/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 00:00:23 by stales            #+#    #+#             */
/*   Updated: 2022/02/18 00:04:51 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, t_size n)
{
	t_uint8	*ts1;
	t_uint8	*ts2;

	ts1 = (t_uint8 *)s1;
	ts2 = (t_uint8 *)s2;
	if (!n)
		return (0);
	while (*ts1 && *ts2 && --n && *ts1++ == *ts2)
		ts2++;
	return (*ts1 - *ts2);
}

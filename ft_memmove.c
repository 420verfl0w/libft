/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 22:58:06 by stales            #+#    #+#             */
/*   Updated: 2022/02/17 23:31:16 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, t_size n)
{
	t_uint8	*tdst;
	t_uint8	*tsrc;

	tdst = (t_uint8 *)dest;
	tsrc = (t_uint8 *)src;
	if (tdst > tsrc)
	{
		tsrc += (n - 1);
		tdst += (n - 1);
		while (n--)
			*tdst-- = *tsrc--;
	}
	else
		while (n--)
			*tdst++ = *tsrc++;
	return (dest);
}

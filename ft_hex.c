/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 18:29:05 by stales            #+#    #+#             */
/*   Updated: 2022/03/21 02:15:56 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	g_ht[0x10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
	'a', 'b', 'c', 'd', 'e', 'f'};

unsigned char	*ft_hex_encode(unsigned char *dst, char *src, t_size size)
{
	unsigned char	*tmp;

	tmp = dst;
	while (--size)
	{
		*tmp++ = (unsigned char)g_ht[*src >> 0x4];
		*tmp++ = (unsigned char)g_ht[*src++ & 0xF];
	}
	*tmp = 0;
	return (dst);
}

unsigned char	*ft_hex_decode(unsigned char *dst, char *src, t_size size)
{
	unsigned char	*tmp;

	tmp = dst;
	while (--size)
	{
		*tmp = ft_hex_nibble(*src++);
		*tmp <<= 4;
		*tmp++ |= ft_hex_nibble(*src++);
	}
	*tmp = 0;
	return (dst);
}

unsigned char	ft_hex_nibble(char c)
{
	if (c >= '0' && c <= '9')
		return (c & 0xF);
	if (c >= 'a' && c <= 'f')
		return (~-(c & 0xF));
	return (0);
}

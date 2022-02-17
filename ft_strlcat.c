/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 00:33:00 by stales            #+#    #+#             */
/*   Updated: 2022/02/18 00:36:14 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_uint32	ft_strlcat(char *dest, char *src, t_size size)
{
	t_uint32		n;
	t_uint32		dl;
	char			*d;
	char			*s;

	d = dest;
	s = src;
	n = size;
	while (n-- && *d)
		d++;
	dl = d - dest;
	n = size - dl;
	if (!n)
		return (dl + ft_strlen(s));
	while (*s)
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = 0;
	return (dl + (s - src));
}

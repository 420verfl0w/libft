/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:11:10 by stales            #+#    #+#             */
/*   Updated: 2022/02/17 18:03:09 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, t_size n)
{
	char	*tdst;
	char	*tsrc;

	tsrc = (char *)src;
	tdst = (char *)dest;
	while (*tsrc && n--)
	{
		*tdst = *tsrc;
		if (*tdst == c)
			return (tdst + 1);
		tdst++;
		tsrc++;
	}
	return ((void *)0);
}

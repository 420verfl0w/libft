/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:15:57 by stales            #+#    #+#             */
/*   Updated: 2022/04/01 19:55:21 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s1, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		i;

	if (!s1 || !f)
		return (LIBFT_NULL);
	i = 0;
	ptr = (char *)malloc(ft_strlen((char *)s1) + 1);
	while (ptr && s1[i])
	{
		ptr[i] = f(i, s1[i]);
		i++;
	}
	if (ptr)
		ptr[i] = 0;
	return (ptr);
}

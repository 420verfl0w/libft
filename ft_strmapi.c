/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:15:57 by stales            #+#    #+#             */
/*   Updated: 2022/03/28 14:42:24 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s1, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)malloc(ft_strlen((char *)s1) + 1);
	while (s1[i])
	{
		ptr[i] = f(i, s1[i]);
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}

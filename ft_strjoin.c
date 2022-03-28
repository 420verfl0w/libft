/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:58:41 by stales            #+#    #+#             */
/*   Updated: 2022/03/28 14:12:01 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	t_size	size;
	char	*ptr;

	size = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1;
	ptr = (char *)malloc(size);
	if (!ptr)
		return (LIBFT_NULL);
	ptr[size] = 0;
	ft_strcpy(ptr, (char *)s1);
	ft_strcat(ptr, (char *)s2);
	return (ptr);
}

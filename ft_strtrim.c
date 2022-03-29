/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:08:31 by stales            #+#    #+#             */
/*   Updated: 2022/03/29 14:34:28 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*end;
	char	*start;
	char	*ptr;

	end = (char *)(s1 + ft_strlen((char *)s1) - 1);
	start = (char *)s1;
	while (*start && ft_strchr(set, *start))
		start++;
	while (*end && ft_strchr(set, *end) && end > start)
		end--;
	ptr = (char *)malloc(end++ - start + 1);
	if (ptr)
		ft_strlcpy(ptr, start, end - start + 1);
	return (ptr);
}

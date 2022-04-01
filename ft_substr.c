/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:18:24 by stales            #+#    #+#             */
/*   Updated: 2022/04/01 19:02:41 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, t_size len)
{
	char		*str;
	t_size		i;

	str = (char *)malloc(len + 1);
	if (!str)
		return (LIBFT_NULL);
	if ((int)start > ft_strlen((char *)s))
		return (ft_strdup(""));
	i = 0;
	while (i < len)
	{
		str[i] = *(s + start + i);
		i++;
	}
	if (str)
		str[i] = 0;
	return (str);
}

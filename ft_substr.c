/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:18:24 by stales            #+#    #+#             */
/*   Updated: 2022/03/28 13:32:30 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, t_size len)
{
	char	*str;

	str = (char *)malloc(len + 1);
	if (!str)
		return (LIBFT_NULL);
	ft_strncpy(str, (char *)(s + start), len);
	str[len + 1] = 0;
	return (str);
}

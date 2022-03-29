/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_words.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:03:24 by brda-sil          #+#    #+#             */
/*   Updated: 2022/03/29 17:03:30 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_get_words(char *str, char c)
{
	int	i;

	i = 0;
	while (*str)
	{
		while (*str && *str != c)
			str++;
		if (*str == c)
		{
			while (*str && *str == c)
				str++;
			if (*str && *str != c)
				i++;
		}
	}
	if (!i)
		i++;
	return (i);
}

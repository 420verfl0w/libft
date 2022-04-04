/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:45:02 by stales            #+#    #+#             */
/*   Updated: 2022/04/04 03:06:42 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief			Reverse a string
 *
 * @param nb		String to reverse
 *
 * @return (char *)	Reversed string
 */

char	*ft_strrev(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = ft_strlen(str) - 1;
	while (i < x)
	{
		str[i] ^= str[x];
		str[x] ^= str[i];
		str[i++] ^= str[x--];
	}
	return (str);
}

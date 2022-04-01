/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 14:20:16 by stales            #+#    #+#             */
/*   Updated: 2022/04/01 12:39:33 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtok(char *str, char *token)
{
	static char	*p;

	if (str)
		p = str;
	if (!p || !token)
		return (LIBFT_NULL);
	str = p;
	if (!*str)
		return (LIBFT_NULL);
	p += ft_strcspn(str, token);
	if (*p)
		*p++ = 0;
	return (str);
}

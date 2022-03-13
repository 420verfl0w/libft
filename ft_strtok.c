/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 14:20:16 by stales            #+#    #+#             */
/*   Updated: 2022/03/13 14:55:22 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtok(char *str, char *token)
{
	static char	*p;

	if (str)
		p = str;
	if (!p || !token)
		return ((char *)0);
	str = p;
	if (!*str)
		return ((char *)0);
	p += ft_strcspn(str, token);
	if (*p)
		*p++ = 0;
	return (str);
}

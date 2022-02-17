/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 22:30:46 by pix               #+#    #+#             */
/*   Updated: 2022/02/17 22:39:54 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*src_new;
	int		i;

	src_new = malloc(sizeof(char) * ft_strlen(src));
	if (!src_new)
		return (src_new);
	i = 0;
	while (src[i])
	{
		src_new[i] = src[i];
		i++;
	}
	return (src_new);
}

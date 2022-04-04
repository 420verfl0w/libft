/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:05:07 by stales            #+#    #+#             */
/*   Updated: 2022/04/04 03:08:04 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief			Allocate and set all byte to null byte of size size
 *
 * @param dest		Size of new string
 *
 * @return (char *)	The new string
 */
char	*ft_strnew(t_size size)
{
	char	*ptr;

	ptr = (char *)malloc(size + 1);
	if (ptr)
		ft_bzero((char *)ptr, size + 1);
	return (ptr);
}

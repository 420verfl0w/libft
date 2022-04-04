/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:35:46 by stales            #+#    #+#             */
/*   Updated: 2022/04/04 03:08:04 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief			Appends the n bytes of src string to the dest string,
 *					overwriting the terminating null byte ('\0') at the end of
 *					dest, and then adds a terminating null byte.
 *
 * @param dest		Base string
 * @param src		Suffix string
 * @param n			Size to copy
 *
 * @return (char*)	The joined list
 */
char	*ft_strncat(char *dest, char *src, t_size n)
{
	char	*tmp;

	tmp = dest;
	while (*tmp)
		tmp++;
	while (n-- && *src)
		*tmp++ = *src++;
	*tmp = 0;
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:59:45 by pix               #+#    #+#             */
/*   Updated: 2022/04/02 15:20:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	@brief			uppercase all occurence of lowercase in a string.
 *
 *	@param	str		string value to convert
 *
 *	@return (char *)return converted value or NULL if error
 */

char	*ft_strupcase(char *str)
{
	char	*tmp;

	tmp = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str ^= 32;
		str++;
	}
	return (tmp);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:59:45 by pix               #+#    #+#             */
/*   Updated: 2022/04/02 15:20:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	@brief			lowercase all occurence of uppercase in a string
 *
 *	@param str		string value to convert
 *
 *	@return (char *)return converted value or NULL if error
 */

char	*ft_strlowcase(char *str)
{
	char	*tmp;

	tmp = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str ^= 32;
		str++;
	}
	return (tmp);
}

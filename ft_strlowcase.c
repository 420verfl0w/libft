/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:59:45 by pix               #+#    #+#             */
/*   Updated: 2022/02/19 14:02:28 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Desc:	lowercase all occurence of uppercase in a string
 *
 *	*str:	string value to convert
 *
 *	Return:	return converted value or NULL if error
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

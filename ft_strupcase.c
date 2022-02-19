/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:59:45 by pix               #+#    #+#             */
/*   Updated: 2022/02/19 14:02:40 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Desc:	uppercase all occurence of lowercase in a string.
 *
 *	*str:	string value to convert
 *
 *	Return:	return converted value or NULL if error
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

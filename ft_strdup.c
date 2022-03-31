/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 22:30:46 by pix               #+#    #+#             */
/*   Updated: 2022/03/31 02:02:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
 *	Desc:	The  strdup() function returns a pointer to a new string which is
 *			a duplicate of the string s.
 *
 *	*src	: string to copy
 *
 *	Return:	On success, the strdup() function returns a pointer to the
 *			duplicated string.
 */

char	*ft_strdup(char *src)
{
	char	*tmp;
	char	*ptr;

	tmp = src;
	while (*tmp)
		tmp++;
	ptr = (char *)malloc(tmp - src);
	tmp = ptr;
	while (*src && tmp)
		*tmp++ = *src++;
	return (ptr);
}

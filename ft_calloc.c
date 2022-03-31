/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:48:42 by stales            #+#    #+#             */
/*   Updated: 2022/03/31 11:06:17 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
 *	Desc:	The calloc() function allocates memory for an array of nmemb
 *			elements of size bytes each and returns a pointer to the allocated
 *			memory. The memory is set to zero.
 *
 *	nmemb:	length of array returned
 *	size:	size in bytes of each element in the array
 *
 *	Return: pointer to the allocated memory all set to zero, return NULL if
 *			nmemb or size is equal to zero, or on error.
 */

void	*ft_calloc(t_size nmemb, t_size size)
{
	void	*ptr;

	ptr = (void *)malloc(nmemb * size);
	if (ptr)
		ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}

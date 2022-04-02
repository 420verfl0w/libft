/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:48:42 by stales            #+#    #+#             */
/*   Updated: 2022/04/02 15:17:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 *	@brief			The calloc() function allocates memory for an array of nmemb
 *					elements of size bytes each and returns a pointer to the
 *					allocated memory. The memory is set to zero.
 *
 *	@param nmemb	length of array returned
 *	@param size		size in bytes of each element in the array
 *
 *	@return (void)	pointer to the allocated memory all set to zero, return NULL
 *					nmemb or size is equal to zero, or on error.
 */

void	*ft_calloc(t_size nmemb, t_size size)
{
	void	*ptr;

	ptr = (void *)malloc(nmemb * size);
	if (ptr)
		ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}

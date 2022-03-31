/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:05:07 by stales            #+#    #+#             */
/*   Updated: 2022/03/31 10:56:03 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(t_size size)
{
	char	*ptr;

	ptr = (char *)malloc(size + 1);
	if (ptr)
		ft_bzero((char *)ptr, size + 1);
	return (ptr);
}

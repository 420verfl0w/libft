/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 21:05:00 by stales            #+#    #+#             */
/*   Updated: 2022/02/22 13:15:10 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_count_digits(int nb)
{
	int	c;

	nb = (unsigned long)nb;
	c = 1;
	while (nb)
	{
		c++;
		nb /= 10;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)malloc(sizeof(char) * (ft_count_digits(n)) + 1);
	if (!ptr)
		return (NULL);
	n = (long)n;
	if (n == 0x7FFFFFFF)
		return (ft_strcpy(ptr, "2147483647"));
	if (n == -2147483648)
		return (ft_strcpy(ptr, "-2147483648"));
	if (n < 0)
		n *= -1;
	if (n == 0)
		ptr[i++] = '0';
	while (n)
	{
		ptr[i++] = (n % 10) + '0';
		n /= 10;
	}
	ptr[i] = 0;
	ft_strrev(ptr);
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:52:46 by stales            #+#    #+#             */
/*   Updated: 2022/03/28 16:34:28 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrem(char *ptr, char const *s1, char const *set)
{
	char	*s_ptr;
	char	*p_set;
	char	*p_s1;

	s_ptr = ptr;
	p_s1 = (char *)s1;
	while (*p_s1)
	{
		p_set = (char *)set;
		while (*p_set)
		{
			if (*p_s1 == *p_set)
				break ;
			p_set++;
		}
		if (*p_set == 0)
			*ptr++ = *p_s1++;
		else
			p_s1++;
	}
	return (s_ptr);
}

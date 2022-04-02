/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:41:41 by stales            #+#    #+#             */
/*   Updated: 2022/04/02 16:07:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/**
 * @brief			write the string s to the standard output
 *
 * @param s			string to write
 *
 * @return (void)
 */

void	ft_putstr(char const *s)
{
	char	*tmp;

	tmp = (char *)s;
	while (tmp && *tmp)
		tmp++;
	write(1, s, tmp - s);
}

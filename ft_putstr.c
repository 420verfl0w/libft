/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:41:41 by stales            #+#    #+#             */
/*   Updated: 2022/04/04 02:58:30 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/**
 * @brief			Write the string s to the standard output
 *
 * @param s			String to write
 *
 * @return (void)	None.
 */
void	ft_putstr(char const *s)
{
	char	*tmp;

	tmp = (char *)s;
	while (tmp && *tmp)
		tmp++;
	write(1, s, tmp - s);
}

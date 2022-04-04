/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:03:35 by stales            #+#    #+#             */
/*   Updated: 2022/04/04 02:57:39 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief			Write the string s and add a new line at the end to the
 *					standard output
 *
 * @param s			String to print
 *
 * @return (void)	None.
 */
void	ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}

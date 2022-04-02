/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:03:35 by stales            #+#    #+#             */
/*   Updated: 2022/04/02 16:04:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief			write the string s and add a new line at the end to the
 *					standard output
 *
 * @param s			string to print
 *
 * @return (void)
 */

void	ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}

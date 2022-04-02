/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:17:07 by stales            #+#    #+#             */
/*   Updated: 2022/04/02 15:57:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/**
 * @brief			write the character c to the standards output
 *
 * @param c			character to print
 *
 * @return (void)
 */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

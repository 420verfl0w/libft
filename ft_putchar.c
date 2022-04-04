/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:17:07 by stales            #+#    #+#             */
/*   Updated: 2022/04/04 02:57:21 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/**
 * @brief			Write the character c to the standards output
 *
 * @param c			Character to print
 *
 * @return (void)	None.
 */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 10:30:45 by stales            #+#    #+#             */
/*   Updated: 2022/04/02 15:59:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/**
 * @brief			write the character c to the file file_descriptor fd
 *
 * @param c			character to write
 * @param fd		file descriptor
 *
 * @return (void)
 */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

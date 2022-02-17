/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:37:57 by stales            #+#    #+#             */
/*   Updated: 2022/02/17 14:52:05 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	char	hel[0x100];

	ft_memcpy(hel, "hello", 5);
	ft_putstr(hel);
	ft_putstr("\n");
	ft_memset(hel, 's', 1);
	ft_putstr(hel);
	ft_bzero(hel, 1);
	ft_putstr(hel);

	return (0);
}
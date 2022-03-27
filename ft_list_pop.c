/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_pop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 22:57:45 by stales            #+#    #+#             */
/*   Updated: 2022/03/27 18:47:04 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_list_pop(t_list **list)
{
	t_list	*next;

	next = (*list)->next;
	free(*list);
	if (next)
		next->prev = LIBFT_NULL;
	*list = next;
}

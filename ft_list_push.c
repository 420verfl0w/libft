/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 22:53:25 by stales            #+#    #+#             */
/*   Updated: 2022/03/27 21:23:55 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_push(t_list **list, t_list *new)
{
	(*list)->prev = new;
	new->next = (*list);
	new->prev = LIBFT_NULL;
	*list = new;
}

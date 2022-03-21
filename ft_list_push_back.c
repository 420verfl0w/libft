/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 00:12:51 by stales            #+#    #+#             */
/*   Updated: 2022/03/21 01:23:17 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_push_back(t_list **list, t_list *new)
{
	t_list	*ptr;

	ptr = *list;
	while (ptr->next)
		ptr = ptr->next;
	new->prev = ptr;
	ptr->next = new;
}

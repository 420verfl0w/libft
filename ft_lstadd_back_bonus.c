/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:39:05 by stales            #+#    #+#             */
/*   Updated: 2022/03/29 17:55:54 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast_back(t_list **list, t_list *new)
{
	t_list	*ptr;

	ptr = *list;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new;
	return (ptr->next);
}

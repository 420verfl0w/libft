/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 19:42:46 by stales            #+#    #+#             */
/*   Updated: 2022/03/27 21:52:05 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_list_remove(t_list **list, int index)
{
	t_list	*ptr;
	t_list	*next;
	t_list	*prev;

	ptr = *list;
	while (ptr && index--)
		ptr = ptr->next;
	next = ptr->next;
	prev = ptr->prev;
	free(ptr);
	ptr = LIBFT_NULL;
	if (prev == LIBFT_NULL)
	{
		next->prev = LIBFT_NULL;
		ptr = next;
	}
	if (next)
	{
		next->prev = prev;
		prev->next = next;
		ptr = prev;
	}
}

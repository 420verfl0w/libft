/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_pop_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 00:18:26 by stales            #+#    #+#             */
/*   Updated: 2022/03/21 00:25:15 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_list_pop_back(t_list **list)
{
	t_list	*ptr;
	t_list	*prev;

	ptr = *list;
	while (ptr->next)
		ptr = ptr->next;
	prev = ptr->prev;
	prev->next = LIBFT_NULL;
	free(ptr);
	ptr = LIBFT_NULL;
}

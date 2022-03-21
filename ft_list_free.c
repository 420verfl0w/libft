/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_free.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 22:35:29 by stales            #+#    #+#             */
/*   Updated: 2022/03/20 23:25:51 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_list_free(t_list **list)
{
	t_list	*next;

	next = NULL;
	while (*list)
	{
		next = (*list)->next;
		free(*list);
		*list = next;
	}
	*list = NULL;
}

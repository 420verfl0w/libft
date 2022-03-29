/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 20:15:33 by stales            #+#    #+#             */
/*   Updated: 2022/03/29 20:32:00 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *))
{
	t_list	*new;
	int		i;

	i = 0;
	while (lst)
	{
		new = ft_lstnew(f(lst));
		del(lst->content);
		lst = lst->next;
	}
}

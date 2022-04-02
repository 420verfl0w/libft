/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:39:55 by pix               #+#    #+#             */
/*   Updated: 2022/04/02 15:13:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	@brief			checks if c is an alphanumeric character. equivalent to
 *					(ft_isalpha(c) || ft_isdigit(c))
 *
 *	@param c		character value to check
 *
 *	@return (int)		nonzero if character is alphanumeric and zero if not
 */

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

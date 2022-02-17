/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:53:10 by stales            #+#    #+#             */
/*   Updated: 2022/02/17 14:58:58 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define NULL ((void *)0)

typedef unsigned long	t_size;
void	*ft_memset(void *s, int c, t_size n);
void	ft_bzero(void *s, t_size n);
void	*ft_memcpy(void *dest, const void *src, t_size n);
void	ft_putstr(char const *s);

#endif
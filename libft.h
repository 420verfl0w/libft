/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:21:59 by stales            #+#    #+#             */
/*   Updated: 2022/02/17 18:22:01 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef unsigned long	t_size;
void	*ft_memset(void *s, int c, t_size n);
void	ft_bzero(void *s, t_size n);
void	*ft_memcpy(void *dest, const void *src, t_size n);
void	*ft_memccpy(void *dest, const void *src, int c, t_size n);
char	*ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);
void	ft_putstr(char const *s);
void	ft_putchar(char c);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:53:10 by stales            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/02/17 18:17:44 by stales           ###   ########.fr       */
=======
/*   Updated: 2022/02/17 18:13:21 by stales           ###   ########.fr       */
>>>>>>> 9aac7fa9039132d35e932e3ead47c9ed12ed2c04
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
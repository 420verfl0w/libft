/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:08:46 by stales            #+#    #+#             */
/*   Updated: 2022/02/17 22:15:42 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef unsigned long	t_size;

void	*ft_memset(void *s, int c, t_size n);
void	*ft_memcpy(void *dest, const void *src, t_size n);
void	*ft_memccpy(void *dest, const void *src, int c, t_size n);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strchr(const char *s, int c);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isblank(int c);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, t_size n);
void	ft_putstr(char const *s);
void	ft_putchar(char c);
void	ft_bzero(void *s, t_size n);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 09:35:57 by stales            #+#    #+#             */
/*   Updated: 2022/02/18 09:57:12 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef unsigned char	t_uint8;
typedef unsigned int	t_uint32;
typedef unsigned long	t_size;

void		*ft_calloc(t_size nmemb, t_size size);
void		*ft_memccpy(void *dest, const void *src, int c, t_size n);
void		*ft_memchr(const void *s, int c, t_size n);
void		*ft_memcpy(void *dest, const void *src, t_size n);
void		*ft_memmove(void *dest, const void *src, t_size n);
void		*ft_memset(void *s, int c, t_size n);
char		*ft_strcat(char *dest, char *src);
char		*ft_strchr(const char *s, int c);
char		*ft_strcpy(char *dest, char *src);
char		*ft_strdup(char *src);
char		*ft_strlowcase(char *str);
char		*ft_strncat(char *dest, char *src, t_size n);
char		*ft_strncpy(char *dest, char *src, t_size n);
char		*ft_strnstr(char *str, char *to_find, int n);
char		*ft_strrchr(const char *s, int c);
char		*ft_strstr(char *str, char *to_find);
char		*ft_strupcase(char *str);
t_uint32	ft_strlcat(char *dest, char *src, t_size size);
t_uint32	ft_strlcpy(char *dest, char *src, t_size size);
int			ft_atoi(char *str);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isblank(int c);
int			ft_iscntrl(int c);
int			ft_isdigit(int c);
int			ft_isgraph(int c);
int			ft_islower(int c);
int			ft_isprint(int c);
int			ft_isspace(int c);
int			ft_isupper(int c);
int			ft_isxdigit(int c);
int			ft_memcmp(const void *s1, const void *s2, t_size n);
int			ft_str_is_alpha(char *s);
int			ft_str_is_lowercase(char *s);
int			ft_str_is_numeric(char *s);
int			ft_str_is_printable(char *s);
int			ft_str_is_uppercase(char *s);
int			ft_strcmp(char *s1, char *s2);
int			ft_strlen(char *str);
int			ft_strncmp(char *s1, char *s2, t_size n);
int			ft_tolower(int c);
int			ft_toupper(int c);
void		ft_bzero(void *s, t_size n);
void		ft_putchar(char c);
void		ft_putnbr(int nb);
void		ft_putstr(char const *s);
void		ft_strclr(char *s);

#endif

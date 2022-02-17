#ifndef LIBFT_H
# define LIBFT_H

# define NULL ((void *)0)
typedef	unsigned long size_t;

void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_putstr(char const *s);

#endif
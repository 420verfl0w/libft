#include "libft.h"

void	*memset(void *s, int c, size_t n)
{
	char	*tmp;

	tmp = (char *)s;
	while (n--)
		*tmp++ = c;
	return (s);
}
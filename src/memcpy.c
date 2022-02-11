#include "libft.h"

void	*memcpy(void *dest, const void *src, size_t n)
{
	char	*tmp;
	char	*tsrc;

	tmp = (char *)dest;
	tsrc = (char *)src;
	while (*src && n--)
		*tmp++ = *tsrc++;
	while (n--)
		*tmp++ = *tsrc++;
	return (dest);
}
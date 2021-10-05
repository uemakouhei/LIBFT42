#include "libft.h"

void *ft_memcpy(void * restrict dst, const void *restrict src, size_t n)
{
	unsigned char *pt;
	unsigned const char *srcpt;

	srcpt = (unsigned char *)src;
	pt = (unsigned char *)dst;

	while (n--)
		*pt++ = *srcpt++;
	return (dst);
}

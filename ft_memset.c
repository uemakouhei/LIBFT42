#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char *pt;

	pt = (unsigned char *)b;
	while (len-- != 0)
		*(pt++) = (unsigned char)c;
	return (b);
}

#include "libft.h"
void *ft_memset(void *buf, int ch, size_t len)
{
	unsigned char *pt;

	pt = (unsigned char *)buf;
	while (len-- != 0)
		*(pt++) = (unsigned char)ch;
	return (buf);
}

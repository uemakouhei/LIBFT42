#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	unsigned char *pt;
	unsigned char c;
       c = '\0';
	pt = (unsigned char *)s;

	while (n-- != 0)
		*pt++ = c;
}

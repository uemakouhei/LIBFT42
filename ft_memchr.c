#include "libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	unsigned char cc;
	
	cc = (unsigned char)c;
	str = (unsigned char *)s;
	while (n--)
	{
		if (*str == cc)
			return ((void *)str);
		str++;
	}
	return (NULL);
}

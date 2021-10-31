#include "libft.h"
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned const char	*srcpt;
	unsigned char		*pt;

	srcpt = (unsigned char *)src;
	pt = (unsigned char *)dst;
	if (pt == NULL && srcpt == NULL)
		return (NULL);
	n = n / sizeof(srcpt[0]);
	while (n--)
	{
		*pt++ = *srcpt++;
	}
	return (dst);
}

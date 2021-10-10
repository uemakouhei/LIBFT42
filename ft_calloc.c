#include"libft.h"
void *ft_memset(void *buf, int ch, size_t n);

void	*ft_calloc(size_t count, size_t size)
{
	if (count == 0 || size == 0)
		return (NULL);
	void *pt;

	pt = malloc(size * count);
	if (pt == NULL)
	{
		return(NULL);
		errno =  12;
	}
	ft_bzero(pt,count * size);
	return (pt);
}

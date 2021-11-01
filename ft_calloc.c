#include"libft.h"
void	*ft_calloc(size_t count, size_t size)
{
	void	*pt;
	size_t	mallocsize;

	mallocsize = count * size;
	if (count == 0 || size == 0)
	{
		pt = malloc(1);
		if (pt == NULL)
		{
			errno = 12;
			return (NULL);
		}
		ft_bzero(pt, 1);
		return (pt);
	}
	pt = malloc(mallocsize);
	if (pt == NULL)
	{
		errno = 12;
		return (NULL);
	}
	ft_bzero(pt, mallocsize);
	return (pt);
}

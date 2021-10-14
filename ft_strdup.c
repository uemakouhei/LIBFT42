#include "libft.h"
size_t ft_strlen(const char *s);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
char    *ft_strdup(const char *src)
{
	char    *ptr;
	size_t size;

	size = ft_strlen(src);
	if (src == NULL)
		return (NULL);
	if (*src == '\0')
		size = 0;	
	ptr = (char *)malloc(ft_strlen(src) + 1);
	if (ptr == NULL)
		return (NULL);
	if (ptr)
	{
		ft_strlcpy(ptr, src,size + 1);
	}	
	return (ptr);
}

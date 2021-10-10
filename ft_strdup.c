#include "libft.h"
size_t ft_strlen(const char *s);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
char    *ft_strdup(const char *src)
{
	char    *ptr;

	if (src == NULL)
	{
		return (NULL);
	}
	ptr = (char *)malloc(ft_strlen(src) + 1);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, src,ft_strlen(src));
	return (ptr);
}

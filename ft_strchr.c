#include "libft.h"
char *ft_strchr(const char *s, int c)
{
	size_t i;

	i = 0;
	while (*s != '\0')
	{
		s++;		
		if (*s == (char)c)
			return ((char *)s);
	}
	return (NULL);	
}

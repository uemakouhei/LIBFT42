#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	size_t i; 

	i = 0;
	while (*s++ != '\0')
		i++;
	if (c == '\0')
		return ((char *)s + i);	
	while (i--)
	{
	       if (*s == (char)c)
	       	return ((char *)s);	       
	}
	return (NULL);
}

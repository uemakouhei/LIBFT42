#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i; 

	i = 0;
	while (*s++ != '\0')
		i++;
	if (c == '\0')
		return ((char *)s + i);	
	while (i--)
	{
	       if (*s == c)
	       	return ((char *)s);	       
	}
	return (NULL);
}

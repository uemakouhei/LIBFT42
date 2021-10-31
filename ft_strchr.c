#include "libft.h"
char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	if (c == 0)
		return ((char *)s + ft_strlen(s));
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

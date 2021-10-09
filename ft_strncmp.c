#include "libft.h"

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (*s1 == '\0' || *s2 == '\0')
		return (*s1 - *s2);
	while (*s1 == *s2)
	{
		if (*s1 == '\0' || --n == 0)
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

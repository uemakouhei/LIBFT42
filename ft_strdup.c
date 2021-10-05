#include "libft.h"

 char    *ft_strcpy(char *s1, char *s2);
char    *ft_strdup(const char *src)
{
	char    *ptr;

	if (src == NULL)
	{
		return (NULL);
	}
	ptr = malloc(ft_strlen(src) + 1);
	if (ptr)
	{
		ft_strcpy(ptr, src);
	}
	return (ptr);
}

char    *ft_strcpy(char *s1, char *s2)
{
	int current_char;

	current_char = 0;
	while (s2[current_char] != '\0')
	{
		s1[current_char] = s2[current_char];
		current_char++;
	}
	s1[current_char] = '\0';
	return (s1);
}

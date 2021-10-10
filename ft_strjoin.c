#include"libft.h"
size_t ft_strlen(const char *s);
char *ft_strjoin(char const *s1, char const *s2)
{
	int i;
	char *str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));	
	if (str == NULL)
		return (0);
	while (*s1 != '\0')
		str[i++] = *s1++;
	while (*s2 != '\0')
		str[i++] = *s2++;
	str[i] = '\0';
	return (str);
}
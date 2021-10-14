#include "libft.h"
size_t ft_strlen(const char *s);

char *ft_substr(char const *s, unsigned int start,size_t len)
{
	int i;
	char *str;

	i = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return(0);
	while (start != 0)
	{
		s++;
		start--;
	}
	while (*s != '\0' && len != 0)
	{	
		str[i++] = *s++;	
		len--;
	}
	str[i] = '\0';
	return (str);
}

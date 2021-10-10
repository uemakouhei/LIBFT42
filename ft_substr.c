#include "libft.h"
size_t ft_strlen(const char *s);

char *ft_substr(char const *s, unsigned int start,size_t len)
{
	int i;
	char *str;

	i = 0;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return(0);
	if (len != 0 && start <= ft_strlen(s))
	{
		while (start-- != 0)
			s++;
		while (*s != '\0' && len != 0)
		{	
			str[i++] = *s++;	
			len--;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
